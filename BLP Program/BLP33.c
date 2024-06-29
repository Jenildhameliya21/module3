//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<math.h>
#include<stdio.h>
int main()
{
	int no1,power;
	printf("\n Enter Number : ");
	scanf("%d",&no1);
	power=pow(no1,1);
	printf("\n %d^1 = %d",no1,power);
	power=pow(no1,2);
	printf("\n %d^2 = %d",no1,power);
	power=pow(no1,3);
	printf("\n %d^3 = %d",no1,power);
	return 0;
}

