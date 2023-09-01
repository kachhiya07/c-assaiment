//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main()
{
	int number[100],n,i,j;
	printf("enter how many element:");
	scanf("%d",&n);
	printf("enter your element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("enter your element:");
	for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(number[i]<number[j])
			{
				number[i]=number[j];
			}
		}
	}
	printf("\nlargest number is: %d",number[0]);
}