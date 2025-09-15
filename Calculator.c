#include <stdio.h>
int main()
{
	printf("Enter two number\n");
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("Use any operation\n1.sum\n2.substraction\n3.multiplication\n4.division\n");
	scanf("%d",&c);
	int S=a+b;
	int H=a-b;
	int G=a*b;
	float F=(float)a/b;
		if(c==1)
		{
			printf("%d", S);
		}else if(c==2)
		{
			printf("%d", H);
		}else if(c==3)
		{
			printf("%d", G);
		}else if(c==4 && b!=0)
		{
			printf("%.2f", F);
		}else
		{
			printf("System has no any other operation");
		}
	return 0;
}
