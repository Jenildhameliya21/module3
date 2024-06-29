/*16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Temperature in Centigrade : ");
	scanf("%d",&a);
	if(a<0)
	{
		printf("\n Freezing Weather");
	}
	else if(a>=0 && a<=10)
	{
		printf("\n Very Cold weather");
	}
	else if(a>10 && a<=20)
	{
		printf("\n Cold Weather");
	}
	else if(a>20 && a<=30)
	{
		printf("\n Normal in Temp");
	}
	else if(a>30 && a<=40)
	{
		printf("\n Its Hot Temp");
	}
	else if(a>=40)
	{
		printf("\n Its Very Hot Temp");
	}
	return 0;
}
