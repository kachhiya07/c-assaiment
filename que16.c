//WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int i,no,fact=1;
	printf("enter your factorial number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
		
	}
	printf("factorial no is %d is %d",no,fact);
}