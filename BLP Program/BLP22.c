/*22. Calculate compound interest(Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
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
	printf("\n Amount is %lf",amount);
	printf("\n Compound Interest is : %lf",ci);
	return 0;
}
