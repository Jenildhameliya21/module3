//30. WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	float day,month,year;
	printf("Enter Year:");
	scanf("%f",&year);
	day=year*360;
	printf("Total Days is:%f",day);
	month=day/30;
	year=month/12;
	printf("\n Years is:%0.2f",year);
	return 0;
}

