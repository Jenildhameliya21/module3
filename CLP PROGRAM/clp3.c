//3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Year : ");
	scanf("%d",&a);
	if(((a%4==0) && (a%100!=0)) || (a%400==0))
	{
		printf("\n %d is Leap Year",a);
	}
	else
	{
		printf("\n %d is Not Leap Year",a);
	}
	return 0;
}
