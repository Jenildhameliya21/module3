//11. WAP to find number is even or odd using ternary operator.
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Number For Check Even or odd:");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even.",a):printf("%d is odd.",a);
	return 0;
}
