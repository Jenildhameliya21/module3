//10. WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Number : ");
	scanf("%d",&a);
	if(0<a)
	{
		printf("\n This Number is Positive");
	}
	else if(0>a)
	{
		printf("\n This Number is Negative");
	}
	else if(0==a)
	{
		printf("\n This Number is Zero");
	}
	return 0;
}
