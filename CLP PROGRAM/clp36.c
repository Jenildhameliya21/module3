/*36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()
{
	int id,unit,total;
	char name[20];
	printf("\n Enter Customer Id : ");
	scanf("%d",&id);
	printf("\n Enter Customer Name : ");
	scanf(" %s",&name);
	printf("\n Enter Unit : ");
	scanf("%d",&unit);
	if(unit>=0 && unit<=50)
	{
		total=unit*0.50;
		total=total+(total*20/100);
				
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>50 && unit<=100)
	{
		total=unit*0.75;
		total=total+(total*20/100);
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>100 && unit<=200)
	{
		total=unit*1.20;
		total=total+(total*20/100);
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>250)
	{
		total=unit*1.50;
		total=total+(total*20/100);
		printf("\n Your Total Rupees is %d",total);
	}
	return 0;
}
