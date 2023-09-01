//WAP to make addition, Subtraction and multiplication of two matrix using2-D Array
#include<stdio.h>
int main()
{
	int num1[2][2],num2[2][2],result[2][2],i,j;
	printf("enter 4 value of first value:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	printf("enter value of second value:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num2[i][j]);
		}
	}
	printf("addition of two array in stored array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num1[i][j]+num2[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",result[i][j]);
		}
			
	}
	printf("\n");

}