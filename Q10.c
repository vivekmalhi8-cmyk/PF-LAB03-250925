#include <stdio.h>
int main()
{
	int v;
	char E;
	printf("Scan number of vehicles and specify: \n");
	scanf(" %d", &v);
	printf("scan vehicles as emergency say y otherwise n \n");
	scanf(" %c", &E);
	if(E == 'y')
	{
		printf("Green Light had showed\n");
	}
	else if(v < 10 && E == 'n')
	{
		printf("Wait for 15 seconds\n");
	}
	else if(v < 30 && v > 10 && E == 'n')
	{
		printf("Wait for 30 seconds\n");
	}
	else if(v > 30 && E == 'n')
	{
		printf("Wait for 60 seconds\n");
	}
	else
	{
		printf("Wait for 90 seconds\n");
	}
	return 0;
}
