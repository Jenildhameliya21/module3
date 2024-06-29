//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter Character : ");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z')
   {
    printf(" '%c' is uppercase alphabet.", ch);
   }
   else if(ch >= 'a' && ch <= 'z')
   {
      printf(" '%c' is lowercase alphabet.", ch);
   }
   else
   {
   printf(" '%c' is special character.", ch);
   }
   return 0;
}
