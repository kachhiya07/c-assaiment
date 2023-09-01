#include<stdio.h>

int main()
{
    int i,j,no, columns;

    
    printf("Enter number of columns:");
    scanf("%d",&no);

    columns=1;

    for(i=1;i<no*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("* ");
        }

        if(i < no)
        {
            
            columns++;
        }
        else
        {
            
            columns--;
        }

        
        printf("\n");
    }

    return 0;
}