#include <stdio.h>

int main()
{
    char ticket;
    int row;
    int child;

    printf("Tell me your ticket class (b for business, e for economy): ");
    scanf(" %c", &ticket);

    printf("Enter your seat row number: ");
    scanf(" %d", &row);

    printf("If you have a child with you, enter their age (enter 0 if none): ");
    scanf(" %d", &child);

    if (ticket == 'b' || child < 5 && child > 0)
    {
        printf("You are in Group A\n");
    }
    else if (ticket == 'e' && row >= 1 && row <= 10)
    {
        printf("You are in Group B\n");
    }
    else if (ticket == 'e' && row >= 11 && row <= 20)
    {
        printf("You are in Group C\n");
    }
    else if (ticket == 'e' && row >= 21)
    {
        printf("You are in Group D\n");
    }
    else
    {
        printf("Invalid input. Please check your ticket class and row number.\n");
    }

    return 0;
}
