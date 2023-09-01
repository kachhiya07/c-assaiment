//Looping programs:
//1. WAP to print 972 to 297 using for loop
#include<stdio.h>
int main()
{
	int no,reminder,reveres=0;
	printf("enter number:");
	scanf("%d",&no);
	while(no!=0){
		reminder=no%10;
		reveres=(reveres*10)+reminder;
		no=no/10;
		
	}
	printf("reverse no is:%d",reveres);
	
}