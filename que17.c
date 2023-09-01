//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int no1=0,no2=1,no3=no1+no2,no,i;
	printf("enter ending point:");
	scanf("%d",&no);
	printf("fibonacci series is: %d %d %d",no1,no2,no3);
	for(i=3;i<no;i++)
	{
		no1=no2;
		no2=no3;
		no3=no1+no2;
		printf(" %d",no3);
	}
	
}