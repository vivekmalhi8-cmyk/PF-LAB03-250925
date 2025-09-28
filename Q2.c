#include <stdio.h>

int main() {
    int passed_courses[] = {1, 3}; 
    int selected_courses[6];
    int count, i, j;
    printf("Enter number of courses to register (max 5): ");
    scanf("%d", &count);
    if (count > 5) {
        printf("Error: Cannot register for more than 5 courses.\n");
        return 1;
    }
    printf("Enter course codes (1 to 6):\n");
    for (i = 0; i < count; i++) {
        scanf("%d", &selected_courses[i]);
    }
    for (i = 0; i < count; i++) {
        if (selected_courses[i] == 2) { 
            int hasC1 = 0;
            for (j = 0; j < 2; j++) {
                if (passed_courses[j] == 1) {
                    hasC1 = 1;
                }
            }
            if (!hasC1) {
                printf("Error: C2 requires prerequisite C1.\n");
            }
        }
        if (selected_courses[i] == 4) {
            int hasC3 = 0;
            for (j = 0; j < 2; j++) {
                if (passed_courses[j] == 3) {
                    hasC3 = 1;
                }
            }
            if (!hasC3) {
                printf("Error: C4 requires prerequisite C3.\n");
            }
        }
    }
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            int c1 = selected_courses[i];
            int c2 = selected_courses[j];

            if ((c1 == 1 && c2 == 5) || (c1 == 5 && c2 == 1)) {
                printf("Error: C1 and C5 have a time clash.\n");
            }
            if ((c1 == 3 && c2 == 6) || (c1 == 6 && c2 == 3)) {
                printf("Error: C3 and C6 have a time clash.\n");
            }
        }
    }
    printf("Validation complete.\n");
    return 0;
}

