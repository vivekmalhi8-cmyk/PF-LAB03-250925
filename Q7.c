#include <stdio.h>
int main()
{
	int A,B;
	printf("Enter amount for transaction\n");
	scanf("%d", &A);
	printf("Todays number of transactions\n");
	scanf("%d", &B);
	if(A > 50000 && B < 4 && B > 0)
	{
		printf("Amount is out of daily limit transaction decline\n");
	}
	else if(B > 3 && A <= 50000)
	{
		printf("Your account is blocked\n");
	}
	else
	{
		printf("Transaction procced");
	}
}
