//WAP to show
// Monday to Sunday using switch case
#include<stdio.h>
int main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	switch(number)
	{
		case 1:printf("monday");
		break;
		case 2:printf("tueseday");
		break;
		case 3:printf("wenseday");
		break;
		case 4:printf("tharsday");
		break;
		case 5:printf("friday");
		break;
		case 6:printf("saturdat");
		break;
		case 7:printf("sunday");
		break;
	}
}