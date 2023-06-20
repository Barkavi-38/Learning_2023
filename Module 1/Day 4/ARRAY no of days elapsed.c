#include <stdio.h>

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int totalDays = 0;
    int i;

    for (i = 0; i < 12; i++) {
        totalDays += days[i];
    }

    int day, month, year;

    printf("Enter the starting day: ");
    scanf("%d", &day);

    printf("Enter the starting month: ");
    scanf("%d", &month);

    printf("Enter the starting year: ");
    scanf("%d", &year);

    int numDaysElapsed = 0;

    for (i = 0; i < 12; i++) {
        if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
            totalDays += 1; 
        }
        if (i < month - 1) {
            numDaysElapsed += days[i];
        } else if (i == month - 1) {
            numDaysElapsed += day;
        }
    }

    int numYears;

    printf("Enter the number of years to calculate: ");
    scanf("%d", &numYears);

    for (i = 0; i < numYears; i++) {
        year++;
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            totalDays += 366; 
        } else {
            totalDays += 365;
        }
    }

    totalDays += numDaysElapsed;

    printf("Total number of days elapsed: %d\n", totalDays);

    return 0;
}

