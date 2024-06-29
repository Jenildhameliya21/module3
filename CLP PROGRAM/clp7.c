//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int math,guj,eng,hin;
	printf("\n Enter Maths Subject Mark : ");
	scanf("%d",&math);
	printf("\n Enter Gujrati Subject Mark : ");
	scanf("%d",&guj);
	printf("\n Enter English Subject Mark : ");
	scanf("%d",&eng);
	printf("\n Enter Hindi Subject Mark : ");
	scanf("%d",&hin);
	if((math<=33) && (guj<=33) && (eng<=33) && (hin<=33))
	{
		printf("\n You Are Pass");
	}
	else
	{
		printf("\n You are Fail");
	}
	return 0;
}
