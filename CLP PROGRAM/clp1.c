//1. Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter First Value:");
	scanf("%d",&a);
	printf("\n Enter Second Value:");
	scanf("%d",&b);
	if (a == b)
	{
		printf("\n Both Value is Same");
	}
	else if(a!=b)
	{
		printf("\n Both Value is Not Same");
	}
	return 0;
}
