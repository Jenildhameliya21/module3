//Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Your Monthly Salary",a);
	scanf("%d",&a);
	b=(10*a)/100;
	c=a-b-b;
	printf("Your Remaining Salary is %d",c);
	return 0;
}
