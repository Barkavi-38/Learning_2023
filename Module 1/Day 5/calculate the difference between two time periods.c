#include <stdio.h>

struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};

struct TimePeriod calculateTimeDifference(struct TimePeriod t1, struct TimePeriod t2) {
    struct TimePeriod diff;
    int t1Seconds, t2Seconds, timeDifference;

    t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    timeDifference = t1Seconds - t2Seconds;
    if (timeDifference < 0) {
        timeDifference = -timeDifference;
    }

    diff.hours = timeDifference / 3600;
    timeDifference = timeDifference % 3600;
    diff.minutes = timeDifference / 60;
    diff.seconds = timeDifference % 60;

    return diff;
}

int main() {
    struct TimePeriod t1, t2, diff;

    printf("Enter time period 1 (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter time period 2 (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    diff = calculateTimeDifference(t1, t2);

    printf("Time difference: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

