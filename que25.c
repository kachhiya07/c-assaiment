#include<stdio.h>
int main()
{
	int i,j,alphabate='A';
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
}