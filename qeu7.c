// WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)

#include<stdio.h>
int main()
{
	
	int no1=4,no2=3,sum;
	printf("enter no1=2\n");
	printf("enter no2=3\n");
	// addition
	sum=no1+no2;
	printf("sum is :%d",sum);
	
	//subtraction
	sum=no1-no2;
	printf("\nsubtraction is :%d",sum);
	
	
	//multiplication
	sum=no1*no2;
	printf("\nmultiplication is :%d",sum);
	
	// division
	sum=no1/no2;
	printf("\ndivision is :%d",sum);
	
	//modulo
	sum=no1%no2;
	printf("\nmodulo is :%d",sum);
	
}