//WAP to show
//2. Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char vowel;
	printf("enter any charcters:");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':printf("vowel");
		break;
			case 'e':printf("vowel");
		break;
			case 'i':printf("vowel");
		break;
			case 'o':printf("vowel");
		break;
			case 'u':printf("vowel");
		break;
		default:printf("Consonant");
	}
}