/*32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main()
{
	int salary,total,hra,da;
	printf("\n Enter Your Salary : ");
	scanf("%d",&salary);
	if(salary>=0 && salary<=10000)
	{
		hra=salary*0.2;
		da=salary*0.8;
		total=salary+hra+da;
		printf("\n Your Salary is %d",total);
	}
	else if(salary>10000 && salary<=20000)
	{
		hra=salary*0.25;
		da=salary*0.90;
		total=salary+hra+da;
		printf("\n Your Salary is %d",total);
	}
	else if(salary>20000)
	{
		hra=salary*0.30;
		da=salary*0.95;
		total=salary+hra+da;
		printf("\n Your Salary is %d",total);
	}
	return 0;
}
