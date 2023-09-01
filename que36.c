//Write a program of structure for five employee that provides the
//followinginformation -print and display empno, empname, address and age
#include<stdio.h>
#include<stdio.h>
struct student {
	int empno,age;
	char empname[100],address[100];

};
int main() {
	struct student s1;
		printf("enter empno:");
			scanf("%d",&s1.empno);
		printf("enter name:");
			scanf("%s",&s1.empname);
		printf("enter age: ");
			scanf("%d",&s1.age);
		printf("enter address:");
			scanf("%s",&s1.address);
			
	printf("\nenter details of 2nd employee\n");
		
 	struct student s2;
		printf("\nenter empno:");
			scanf("%d",&s2.empno);
		printf("enter name:");
			scanf("%s",&s2.empname);
		printf("enter age: ");
			scanf("%d",&s2.age);
		printf("enter address:");
			scanf("%s",&s2.address);
			
	printf("\nenter details of 3rd employee\n");
	
	struct student s3;
		printf("\nenter empno:");
			scanf("%d",&s3.empno);
		printf("enter name:");
			scanf("%s",&s3.empname);
		printf("enter age: ");
			scanf("%d",&s3.age);
		printf("enter address:");
			scanf("%s",&s3.address);
			
	printf("\nenter details of 4rt employee\n");
	
	struct student s4;
		printf("\nenter empno:");
			scanf("%d",&s4.empno);
		printf("enter name:");
			scanf("%s",&s4.empname);
		printf("enter age: ");
			scanf("%d",&s4.age);
		printf("enter address:");
			scanf("%s",&s4.address);
			
	printf("\nenter details of 5th employee\n");
	
	struct student s5;
		printf("\nenter empno:");
			scanf("%d",&s5.empno);
		printf("enter name:");
			scanf("%s",&s5.empname);
		printf("enter age: ");
			scanf("%d",&s5.age);
		printf("enter address:");
			scanf("%s",&s5.address);

	return 0;



}
