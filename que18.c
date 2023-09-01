//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
int main()
{
	int reverse=0,no,reminder;
	printf("enter ending point:");
	scanf("%d",&no);
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("%d",reverse);
}
