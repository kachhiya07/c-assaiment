//WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)
#include<stdio.h>
int main()
{	
	int no,a,b;
	printf("-----menu-----\n");
	printf("1.Addition\t\n2.Subtraction\t\n3. Multiplication\t\n4.Division\n");
	printf("---------------\n");
	printf("your choice:");
	scanf("%d",&no);
	

	switch(no)
	{
		case 1:
				printf("your choice is addition\n");
				printf("enter value :");
				scanf("%d",&a);
				printf("emter value :");
				scanf("%d",&b);	
				printf("%d and %d is :%d",a,b,a+b);
			break;
			
		case 2:
				printf("your choice is Subtraction \n");
				printf("enter value :");
				scanf("%d",&a);
				printf("emter value :");
				scanf("%d",&b);	
				printf("%d and %d is :%d",a,b,a-b);
			break;
			
		case 3:
				printf("your choice is multiplication \n");
				printf("enter value :");
				scanf("%d",&a);
				printf("emter value :");
				scanf("%d",&b);	
				printf("%d and %d is :%d",a,b,a*b);
			break;
			
		case 4:
				printf("your choice is division \n");
				printf("enter value :");
				scanf("%d",&a);
				printf("emter value :");
				scanf("%d",&b);	
				printf("%d and %d is :%d",a,b,a-b);
			break;
	}
}