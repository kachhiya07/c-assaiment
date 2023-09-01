//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int year,days;
	
	//WAP to convert days into years
	
	printf("enter day:");
	scanf("%d",&days);
	year=days/365;
	printf("year is:%d\n",year);
	
	//WAP to convert years into days
	
	printf("enter year:");
	scanf("%d",&year);
	days=year*365;
	printf("days is:%d",days);
	
	
}
