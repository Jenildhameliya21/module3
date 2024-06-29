//. Convert minutes into seconds and hours.
#include<stdio.h>
int main()
{
	int m,s,h;
	printf("Enter Minutes");
	scanf("%d",&m);
	s=m*60;
	printf("Minutes into Second is %d",s);
	return 0;	
}
