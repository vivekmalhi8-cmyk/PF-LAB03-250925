#include <stdio.h>

#define DAYS_IN_WEEK 7
#define MAX_WEEKLY_HOURS 40
#define MAX_SHIFT_HOURS 8

int main() {
    int availability[DAYS_IN_WEEK];
    int shifts[DAYS_IN_WEEK];
    int totalHours = 0;
    int i;
    int valid = 1;
    printf("Enter availability for each day (0 = unavailable, 1 = available):\n");
    printf("Sunday to Saturday:\n");
    for (i = 0; i < DAYS_IN_WEEK; i++) {
        scanf("%d", &availability[i]);
    }
    printf("Enter scheduled shift hours for each day (0 if no shift):\n");
    for (i = 0; i < DAYS_IN_WEEK; i++) {
        scanf("%d", &shifts[i]);
    }
    for (i = 0; i < DAYS_IN_WEEK; i++) {
        if (shifts[i] > 0) {
            if (availability[i] == 0) {
                printf("Error: Shift scheduled on unavailable day (Day %d).\n", i);
                valid = 0;
            }
            if (shifts[i] > MAX_SHIFT_HOURS) {
                printf("Error: Shift on Day %d exceeds 8 hours.\n", i);
                valid = 0;
            }

            totalHours += shifts[i];
        }
    }
    if (totalHours > MAX_WEEKLY_HOURS) {
        printf("Error: Total weekly hours exceed 40. Scheduled: %d\n", totalHours);
        valid = 0;
    }

    if (valid == 1) {
        printf("Schedule is valid.\n");
    } else {
        printf("Schedule is invalid due to above errors.\n");
    }

    return 0;
}

