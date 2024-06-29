//12. WAP to find maximum number among 3 numbers using ternary operator.
#include<stdio.h>
int main()
{
	int no1,no2,no3,m;
	printf("\n Enter Number 1 : ");
	scanf("%d",&no1);
	printf("\n Enter Number 2 : ");
	scanf("%d",&no2);
	printf("\n Enter Number 3 : ");
	scanf("%d",&no3);
	m=(no1>no2)?(no1>no3?no1:no3):(no2>no3?no2:no3);
	printf("%d is max",m);
	return 0;
}
