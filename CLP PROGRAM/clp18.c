//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	int a,b,p;
	printf("\n Enter Purchase Price : ");
	scanf("%d",&a);
	printf("\n Enter Selling Price : ");
	scanf("%d",&b);
	if(a<b)
	{
		p=b-a;
		printf("\n Profit is %d",p);
	}
	else if(a>b)
	{
		p=a-b;
		printf("\n Loss is %d",p);
	}
	else 
	{
		printf("\n Profit is %d",p);
	}
	return 0;
}
