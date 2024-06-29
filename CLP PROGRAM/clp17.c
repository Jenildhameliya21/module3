//17. Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("\n Enter Side 1 : ");
	scanf("%d",&no1);
	printf("\n Enter Side 2 : ");
	scanf("%d",&no2);
	printf("\n Enter Side 3 : ");
	scanf("%d",&no3);
	if(no1+no2+no3==180)
	{
		printf("\n Triangle Can Be Formed");
	}
	else
	{
		printf("\n Triangle Can't Be Formed");
	}
	return 0;
}
