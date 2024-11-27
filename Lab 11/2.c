// Read the File. Split the contents into words. Count Occurrences. Use a data structure to store each unique word and its corresponding count. Output the Results

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100
#define MAX_WORDS 1000

struct WordCount {
    char word[MAX_WORD_LENGTH];
    int count;
};

void countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Could not open file.\n");
        return;
    }

    struct WordCount wordCounts[MAX_WORDS];
    int totalWords = 0;
    char word[MAX_WORD_LENGTH];

    while (fscanf(file, "%s", word) != EOF) {
        int found = 0;
        for (int i = 0; i < totalWords; i++) {
            if (strcmp(wordCounts[i].word, word) == 0) {
                wordCounts[i].count++;
                found = 1;
                break;
            }
        }
        if (!found && totalWords < MAX_WORDS) {
            strcpy(wordCounts[totalWords].word, word);
            wordCounts[totalWords].count = 1;
            totalWords++;
        }
    }

    fclose(file);

    printf("Word Counts:\n");
    for (int i = 0; i < totalWords; i++) {
        printf("%s: %d\n", wordCounts[i].word, wordCounts[i].count);
    }
}

int main() {
    const char *filename = "example.txt";
    countWordsInFile(filename);
    return 0;
}
