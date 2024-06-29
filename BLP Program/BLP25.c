//25. Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
	int i;
	float expense[5];
	float total=0,average;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Expense %d : ", i );
		scanf("%f",&expense[i]);
		total+=expense[i];
	}
	average=total/i;
	printf("\n Total Expense : %.2f\n",total);
	printf("\n Average Expense : %.2f\n",average);
	return 0;
}
