//19.Calculate compound interest
//A	=	final amount
//P	=	initial principal balance    
//r	=	interest rate
//n	=	number of times interest applied per time period
//t	=	number of time periods elapsed
#include<stdio.h>
#include<math.h>
int main()
{
	double principal,rate,time,amount,ci;
	printf("\n Enter Principal Amount : ");
	scanf("%lf",&principal);
	printf("\n Enter Rate : ");
	scanf("%lf",&rate);
	printf("\n Enter Time : ");
	scanf("%lf",&time);
	amount=principal*((pow((1 +rate / 100), time)));
	ci=amount-principal;
	printf("\n Compound Interest is : %lf",ci);
	return 0;
}
