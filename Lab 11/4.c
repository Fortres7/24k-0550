#include <stdio.h>

struct Marks {
    float maths;
    float science;
    float english;
};

struct Student {
    int roll_no;
    char name[50];
    struct Marks marks;
};

float Average(struct Marks marks) {
    return (marks.maths + marks.science + marks.english) / 3;
}

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter name for student %d: ", i + 1);
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Enter marks for maths, science, and english: ");
        scanf("%f %f %f", &students[i].marks.maths, &students[i].marks.science, &students[i].marks.english);
    }
    printf("\nAverage Marks of Students:\n");
    for (int i = 0; i < 5; i++) {
        float avg = Average(students[i].marks);
        printf("Roll No: %d, Name: %s, Average Marks: %.2f\n", students[i].roll_no, students[i].name, avg);
    }
    return 0;
}
