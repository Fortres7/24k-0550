#include <stdio.h>

int main() {
    float gpa;

    printf("Enter the Grade Point Average (0.0 - 4.0): ");
    scanf("%f", &gpa);

    (gpa >= 0.0 && gpa <= 0.99) ? printf("Failed semester—registration suspended\n") :
    (gpa >= 1.0 && gpa <= 1.99) ? printf("On probation for next semester\n") :
    (gpa >= 2.0 && gpa <= 2.99) ? printf("(no message)\n") :
    (gpa >= 3.0 && gpa <= 3.49) ? printf("Dean's list for semester\n") :
    (gpa >= 3.5 && gpa <= 4.0) ? printf("Highest honors for semester\n") :
    printf("Invalid GPA\n");

    return 0;
}
