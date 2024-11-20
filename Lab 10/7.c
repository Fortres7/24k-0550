#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

int isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValid(Date d) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1) return 0;
    if (d.month == 2 && isLeap(d.year)) daysInMonth[1] = 29;
    return d.day <= daysInMonth[d.month - 1];
}

int dateToDays(Date d) {
    int days = d.year * 365 + d.day;
    for (int i = 1; i < d.month; i++) {
        if (i == 2 && isLeap(d.year)) days += 29;
        else days += (i == 2 ? 28 : (i % 2 == 1 && i < 8 || i % 2 == 0 && i > 7) ? 31 : 30);
    }
    days += d.year / 4 - d.year / 100 + d.year / 400;
    return days;
}

int daysBetween(Date d1, Date d2) {
    return dateToDays(d2) - dateToDays(d1);
}

char* dayOfWeek(Date d) {
    char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int y = d.year, m = d.month, k = d.day;
    if (m < 3) { m += 12; y--; }
    int h = (k + (13 * (m + 1)) / 5 + y + (y / 4) - (y / 100) + (y / 400)) % 7;
    return days[(h + 6) % 7];
}

int main() {
    Date d1 = {10, 12, 2022};
    Date d2 = {20, 12, 2022};

    if (isValid(d1) && isValid(d2)) {
        printf("Days between: %d\n", daysBetween(d1, d2));
        printf("Day of the week for d1: %s\n", dayOfWeek(d1));
        printf("Day of the week for d2: %s\n", dayOfWeek(d2));
    } else {
        printf("Invalid date(s).\n");
    }

    return 0;
}
