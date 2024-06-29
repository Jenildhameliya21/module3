//24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int salary,average,sum=0,i;
	char name[20];
	for(i=0;i<5;i++)
	{
		printf("\n Enter Your Name : ");
		scanf("%s",&name);
		printf("\n Enter Your Salary : ");
		scanf("%d",&salary);
		sum+=salary;
	}
	average=sum/i;
	printf("\n Total Salary is %d",sum);
	printf("\n Total Average Salary is %d",average);
	return 0;
}
