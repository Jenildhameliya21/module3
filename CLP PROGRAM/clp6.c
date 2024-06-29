//6. Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter Character : ");
	scanf("%c",&c);
	if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
	{
		printf("\n You Are Entered Character %c is Vowel...",c);
	}
	else if((c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
	{
		printf("\n You Are Entered Character %c is Vowel...",c);
	}
	else
	{
		printf("\n You Are Entered Character %c is consonant...",c);
	}
	return 0;
}
