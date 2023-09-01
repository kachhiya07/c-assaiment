//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
int main()
{
	//area of circle
	float pi=3.14,r,a;
	printf("enter radios");
	scanf("%f",&r);
	a=pi*r*r;
	printf("area=%f",a);
	
	//area of rectangle
	float h,b,a;
	printf("enter hight:");
	scanf("%f",&h);
	printf("enter base:");
	scanf("%f",&b);
	a=h*b;
	printf("area is :%f",a);
	
	//area of	triangle
	
	float h,b,a;
	printf("enter hight:");
	scanf("%f",&h);
	printf("enter base:");
	scanf("%f",&b);
	a=0.5*h*b;
	printf("area is :%f",a);
	
	
}