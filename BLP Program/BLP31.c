//31. Convert kilometers into meters
#include<stdio.h>
int main()
{
	float kilometer,meter;
	printf("Enter Kilometers is:");
	scanf("%f",&kilometer);
	meter=kilometer*1000;
	printf("Total Meters is:%0.2f",meter);
	return 0;
}
