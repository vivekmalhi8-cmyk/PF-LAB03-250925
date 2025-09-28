#include <stdio.h>

int main() {
    int day;
    int corruption;

    printf("Simulating 7-day backup cycle...\n");

    for (day = 1; day <= 7; day++) {
        printf("\nDay %d:\n", day);

        printf("Is there any file corruption today? (1 for Yes, 0 for No): ");
        scanf("%d", &corruption);

        if (corruption == 1) {
            printf("Corruption detected! Triggering FULL backup.\n");
        } else {
            if (day == 7) {
                printf("Weekly schedule reached. Performing FULL backup.\n");
            } else {
                printf("No corruption. Performing INCREMENTAL backup.\n");
            }
        }
    }

    return 0;
}
