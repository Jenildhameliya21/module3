//37. WAP to show i. Monday to Sunday using switch case 
#include<stdio.h>
int main()
{
	int a;
	printf("\n Enter Any 1 to 7 Number : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n Monday");
			break;
		case 2:
			printf("\n Tuesday");
			break;
		case 3:
			printf("\n Wednesday");
			break;
		case 4:
			printf("\n Thursday");
			break;
		case 5:
			printf("\n Friday");
			break;
		case 6:
			printf("\n Saturday");
			break;
		case 7:
			printf("\n Sunday");
			break;
	}
	return 0;
}
