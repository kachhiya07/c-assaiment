//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("this year is leap year");
	}
	else if(year%4==0)
	{
		printf("leap year");
	}
	else{
		printf("this year is not leap year");
	}
}