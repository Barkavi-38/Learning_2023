#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leapYear(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int getDaysInMonth(int month, int year) {
    int daysInMon[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && leapYear(year))
        return 29;
    return daysInMon[month - 1];
}

int countDaysElapsed(const char* dateStr) {
    int dd, mm, yyyy;
    sscanf(dateStr, "%d/%d/%d", &dd, &mm, &yyyy);

    int totalDays = dd;
    int i;

    for (i = 1; i < mm; i++) {
        totalDays += getDaysInMonth(i, yyyy);
    }

    return totalDays;
}

int main() {
    char dateStr[11];

    printf("Enter the date in the format DD/MM/YYYY: ");
    fgets(dateStr, sizeof(dateStr), stdin);
    if (dateStr[strlen(dateStr) - 1] == '\n') {
        dateStr[strlen(dateStr) - 1] = '\0';
    }

    int daysElapsed = countDaysElapsed(dateStr);

    printf("Number of days elapsed: %d\n", daysElapsed);

    return 0;
}

