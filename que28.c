//Write a program to find out the max number from given array using function
#include<stdio.h>
int main()
{
	int i,j,n,number[100];
	printf("enter how many element: ");
	scanf("%d",&n);
	printf("enter your element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&number[i]);
	}
	
	printf("enter your element:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",number[i]);
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
	printf("\nlargest number is :%d",number[0]);
	
	
}