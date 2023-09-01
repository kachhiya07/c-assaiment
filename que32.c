//WAP to take two Array input from user and sort them in ascending ordescending order as per user’s choice
#include<stdio.h>
int main()
{
	int i,j,n,number[100],temp;
	printf("enter how many element you want to enter:");
	scanf("%d",&n);
	printf("enter element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("before sorting element\n:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",number[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(number[i]<number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	printf("\nafter sorting element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",number[i]);
	}
	
}