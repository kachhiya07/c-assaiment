#include<stdio.h>
struct employee{
	int emp_no,age;
	char empname[100],address[100];
	float empsalary;
};
int main()
{
	struct employee e1;
	printf("emp no is :");
	scanf("%d",&e1.emp_no);
	printf("empname is :");
	scanf("%s",&e1.empname);
	printf("employee age:");
	scanf("%d",&e1.age);
	printf("empoyee address:");
	scanf("%s",&e1.address);
	printf(" sallary is :");
	scanf("%f",&e1.empsalary);
	return 0;

}