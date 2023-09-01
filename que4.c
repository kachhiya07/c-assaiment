// WAP to find simple interest
#include<stdio.h>
int main()
{
	float p,r,n,i;
	printf("enter value of p,r,n");
	scanf("%f %f %f",&p,&r,&n);
	i=p*r*n/100;
	printf("result is:%f",i);
}