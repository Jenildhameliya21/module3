/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement.*/
#include<stdio.h>
int main()
{
	int a,b;
	float ans;
	char ch;
	printf("\n Enter First Value : ");
	scanf("%d",&a);
	printf("\n Enter Second Value : ");
	scanf("%d",&b);
	printf("\n Enter choice : ");
	scanf(" %c",&ch);
	if(ch=='+')
	{
		ans=a+b;
	}
	else if(ch=='-')
	{
		ans=a-b;
	}
	else if(ch=='*')
	{
		ans=a*b;
	}
	else if(ch=='/')
	{
		ans=a/b;
	}
	else if(ch=='%')
	{
		ans=a%b;
	}
	printf("\n Your Answer is %f ",ans);
	return 0;
}
