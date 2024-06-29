//26. Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter Fahrenheit Temperature:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Temperature Fahrenheit to Celsius is %f",c);
	return 0; 
}
