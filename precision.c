#include <stdio.h>
int main()
{
	float a;
	printf("Enter any decimal number for specification");
	scanf("%f",&a);
	printf("At 6 decimal place setting precision\nNumber is: %f",a);
	printf(" At 2 decimal place setting precision\nNumber is: %.2f",a);
	return 0;
}
