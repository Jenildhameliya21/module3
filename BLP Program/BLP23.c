//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int no1,no2;
	printf("Enter Number 1:");
	scanf("%d",&no1);
	printf("Enter Number 2:");
	scanf("%d",&no2);
	no1=no2*no1;//2*3=6
	no2=no1/no2;//6/2=3
	no1=no1/no2;//6/3=2
	printf("\n After swapping is %d %d",no1,no2);
	return 0;
}
