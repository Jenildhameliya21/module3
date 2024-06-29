// find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	int a,l,w,h;
	printf("Enter Value of Length",l);
	scanf("%d",&l);
	printf("Enter Value of Width",w);
	scanf("%d",&w);
	printf("Enter Value of Height",h);
	scanf("%d",&h);
	a=2*((w*l)+(h*l)+(h*w));
	printf("Area of a Rectangular Prism Formula is %d",a);
	return 0;
}
