//28. Convert years into days and months
#include<stdio.h>
int main()
{
	float day,month,year;
	printf("Enter Years:");
	scanf("%f",&year);
	month=year*12;
	printf("Total Month is %0.2f",month);
	day=month*30;
	printf("\n Total Days is %0.2f",day);
	return 0;
}
