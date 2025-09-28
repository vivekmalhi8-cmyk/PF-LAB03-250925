#include <stdio.h>

int main() {
    int action1, action2, action3;

    printf("Action 1 (0 = stayed on page, 1 = switched tab): ");
    scanf("%d", &action1);

    if (action1 == 1) {
        printf("Warning: First tab switch detected.\n");
    }

    printf("Action 2 (0 = stayed on page, 1 = switched tab): ");
    scanf("%d", &action2);

    if (action2 == 1) {
        if (action1 == 1) {
            printf("Warning: Second tab switch detected.\n");
        } else {
            printf("Warning: First tab switch detected.\n");
        }
    }

    printf("Action 3 (0 = stayed on page, 1 = switched tab): ");
    scanf("%d", &action3);

    if (action3 == 1) {
        if ((action1 == 1 && action2 == 1) || (action1 == 1 && action2 == 0) || (action1 == 0 && action2 == 1)) {
            printf("Exam terminated due to third tab switch.\n");
        } else {
            printf("Warning: First tab switch detected.\n");
        }
    }

    if (action1 == 0 && action2 == 0 && action3 == 0) {
        printf("Exam completed successfully.\n");
    } else if ((action1 + action2 + action3) < 3) {
        printf("Exam completed with warnings.\n");
    }

    return 0;
}
