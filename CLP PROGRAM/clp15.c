/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
int main()
{
	int maths,phy,chem,tot,tot1;
	printf("\n Enter Maths Marks=");
	scanf("%d",&maths);
	printf("\n Enter Physics Marks=");
	scanf("%d",&phy);
	printf("\n Enter Chemistry Marks=");
	scanf("%d",&chem);
	tot=maths+phy+chem;
	tot1=maths+phy;
	if(maths>=65 && phy>=55 && chem>=50 && tot>=190 && tot1>=140)
	{
		printf("\n You Are Eligible For Addmision");
	}
	else
	{
		printf("\n You Are Not Eligible For Addmision");
	}
	return 0;
}
