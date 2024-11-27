#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Could not open file for reading.\n");
        return;
    }
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *buffer = (char *)malloc(fileSize + 1);
    fread(buffer, 1, fileSize, file);
    buffer[fileSize] = '\0';
    fclose(file);
    
    char *pos = buffer;
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);
    
    while ((pos = strstr(pos, oldWord)) != NULL) {
        long offset = pos - buffer;
        char *newBuffer = (char *)malloc(fileSize + newWordLen - oldWordLen + 1);
        strncpy(newBuffer, buffer, offset);
        strcpy(newBuffer + offset, newWord);
        strcpy(newBuffer + offset + newWordLen, buffer + offset + oldWordLen);
        free(buffer);
        buffer = newBuffer;
        fileSize += newWordLen - oldWordLen;
        pos += newWordLen;
    }
    
    file = fopen(filename, "w");
    if (!file) {
        printf("Could not open file for writing.\n");
        free(buffer);
        return;
    }
    fwrite(buffer, 1, fileSize, file);
    fclose(file);
    free(buffer);
}

int main() {
    const char *filename = "example.txt";
    const char *oldWord = "old";
    const char *newWord = "new";
    replaceWordInFile(filename, oldWord, newWord);
    return 0;
}
