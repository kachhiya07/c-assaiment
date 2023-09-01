//WAP to find factorial using recursion
#include<stdio.h>
int number(int n);
int main()
{
	int n;
	printf("enter a positive no:");
	scanf("%d",&n);
	printf("factorial of %d = %d",n,number(n));
	
	
}
int number(int n)
{
	if(n>=1)
	return n*number(n-1);
	else
		return 1;	
	
}