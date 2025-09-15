#include <stdio.h>
int main()
{
	char name[40];
	int age;
	printf("Enter your name and age");
	scanf("%s %d",&name,&age);
	printf("Hello %s, you are %d years old.",name,age);
	return 0;
}
