//31. Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
int main()
{
	int month;
	printf("\n Enter Any Month : ");
	scanf("%d",&month);
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("\n This Month Days is 31");	
	}	
	else if(month==2)
	{
		printf("\n This Month Days is 28");
	}
	else
	{
		printf("\n This Month Days is 30");
	}
	return 0;
}
