//2. Write a C program to read the value of an integer m and display the value of 0 1n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Number:");
	scanf("%d",&a);
	if (0>a)
	{
		printf("\n -1");
	}
	else if(0<a)
	{
		printf("\n 1");
	}
	else if(0==a)
	{
		printf("\n 0");
	}
	return 0;
}
