#include <stdio.h>
int main() 
{
    char name[100];
    int age;
    char condition;
    char priority[30];
    printf("Enter patient's name: ");
    scanf(" %[^\n]", name);
    printf("Enter patient's age: ");
    scanf("%d", &age);
    printf("Enter patient's condition (c for critical, M for moderate, m for mild): ");
    scanf(" %c", &condition);
    if (age < 12 || age > 65 || condition == 'c')
	{
        sprintf(priority, "High Priority");
    } else if (condition == 'M') {
        sprintf(priority, "Medium Priority");
    } else if (condition == 'm') {
        sprintf(priority, "Low Priority");
    } else {
        sprintf(priority, "Unknown Priority");
    }
    printf("\n======= EMERGENCY CARD =======\n");
    printf("Patient Name   : %s\n", name);
    printf("Age            : %d\n", age);
    if (condition == 'c')
        printf("Condition      : Critical\n");
    else if (condition == 'M')
        printf("Condition      : Moderate\n");
    else if (condition == 'm')
        printf("Condition      : Mild\n");
    else
        printf("Condition      : Invalid Input\n");
    printf("Priority Level : %s\n", priority);
    printf("================================\n");
    return 0;
}

