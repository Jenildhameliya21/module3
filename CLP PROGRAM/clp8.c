/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Height of a Person in Centimeters : ");
	scanf("%d",&a);
	if(150>a)
	{
		printf("\n You Are Height Dwarf",a);
	}
	else if(150==a)
	{
		printf("\n You Are Height is Average Height",a);
	}
	else if(150<a)
	{
		printf("\n You Are Height is Tall",a);
	}
	return 0;
}
