#include <stdio.h>
int main()
{
	int fan,AC,Fridge;
	printf("Enter fan daily energy units: ");
	scanf("%d", &fan);
	printf("Enter AC daily energy units: ");
	scanf("%d", &AC);
	printf("Enter Fridge daily energy units: ");
	scanf("%d", &Fridge);
	printf("============ Electricity Monitor ===============\n");
	if(fan>10)
	{
		printf("Fan consumes high voltage:          %d kWh\n", fan);
		
	}else{
		
		printf("Fan consumes normal voltage:        %d kWh\n", fan);
		
	}
	if(AC>10)
	{
		printf("AC consumes high voltage:           %d kWh\n", AC);
		
	}else{
		printf("AC consumes normal voltage:         %d kWh\n", AC);
		
	}
	if(Fridge>10)
	{
		printf("Refrigator consumes high voltage:   %d kWh\n", Fridge);
		
	}else
	{
		printf("Refrigator consumes normal voltage: %d kWh\n", Fridge);
		
	}
	printf("===================== End ======================\n");
	return 0;
}
