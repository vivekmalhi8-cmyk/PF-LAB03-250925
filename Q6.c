#include <stdio.h>
int main()
{
	char course;
	int seat;
	printf("Enter your course A or B");
	scanf("%c", &course);
	if(course == 'A')
	{
		seat = 1;
		printf("Your seat number is: %d", seat);
	}
	else if(course == 'B')
	{
		seat = 2;
		printf("Your seat number is: %d", seat);
	}else
	{
		printf("Your course is out of rules");
	}
}
