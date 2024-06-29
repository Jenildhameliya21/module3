//32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	double no1,no2,ans;
	printf("\n Enter Number 1 : ");
	scanf("%lf",&no1);
	printf("\n Enter number 2 : ");
	scanf(" %lf",&no2);
	ans=no1+no2;
	printf("\n This Variable Size is %d",sizeof(ans));
	return 0;
}
