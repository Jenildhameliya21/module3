/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/
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
	if(unit>=0 && unit<=350)
	{
		total=unit*1.2;
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>350 && unit<=600)
	{
		total=unit*1.5;
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>600 && unit<=800)
	{
		total=unit*1.8;
		printf("\n Your Total Rupees is %d",total);
	}
	else if(unit>800)
	{
		total=unit*2;
		printf("\n Your Total Rupees is %d",total);
	}
	return 0;
}
