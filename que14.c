//4. How many odd numbers are there
#include<stdio.h>
int main()
{
	int no,i,sum=0;
	printf("enter ending number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2!=0)
		{
			printf("odd number:%d\n",i);
			sum=sum+i;
		}	
	}
	printf("%d is sum",sum);
}