#include<stdio.h>
int main()
{
	int i,no;
	printf("enter no:");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d : %d\n",no,i,no*i);
	}
}