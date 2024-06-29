//14. WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("\n Enter Number 1 : ");
	scanf("%d",&no1);
	printf("\n Enter Number 2 : ");
	scanf("%d",&no2);
	printf("\n Enter Number 3 : ");
	scanf("%d",&no3);
	if(no1>no2 && no1>no3)
	{
		printf("\n %d is Maximum",no1);	
	}	
	else if(no2>no1 && no2>no3)
	{
		printf("\n %d is Maximum",no2);
	}
	else
	{
		printf("\n %d is Maximum",no3);
	}
	return 0;
}
