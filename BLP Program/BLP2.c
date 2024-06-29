//Simple calculator
#include<stdio.h>
int main()
{
	int no1,no2;
	printf("Enter Two Number");
	scanf("\n %d %d",&no1,&no2);
	int no3;
	no3=no1+no2;
	printf("\n Addition is %d",no3);
	 
	no3=no1-no2;
	printf("\n Substraction is %d",no3);
	
	no3=no1*no2;
	printf("\n Multiplication is %d",no3);
	
	no3=no1/no2;
	printf("\n Division is %d",no3);
	
	no3=no1%no2;
	printf("\n Modulo is %d",no3);
	
	return 0;
}
