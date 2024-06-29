//. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("Enter Number 1");
	scanf("%d",&no1);
	printf("Enter Number 2");
	scanf("%d",&no2);
	no3=no1;
	no1=no2;
	no2=no3;
	printf("\n After swapping is %d %d",no1,no2);
	no1=no2+no1;//1+2=3
	no2=no1-no2;//3-2=1
	no1=no1-no2;//3-1=2                
	printf("\n After swapping is %d %d",no1,no2);
	return 0;
}
