//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter value:");
	scanf("%d",&a);
	printf("enter value:");
	scanf("%d",&b);
	printf("before swap a is %d and b is %d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("after swap a is %d and b is %d",a,b);
}