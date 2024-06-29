//37. WAP to show  ii. Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter Character : ");
	scanf(" %c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n This Character is Vowel ");
				break;
		default:
			printf("\n This Character is Consonant");
	}
	return 0;
}
