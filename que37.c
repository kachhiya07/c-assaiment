//WAP to show difference between Structure and Union
struct student{
	int rollno;
	char name[100];
	float pr;
};
	union myunion{
		int intvalue;
		float floatvalue;
	};
int main()
{
	struct student s1;
	printf("roll no is :");
	scanf("%d",&s1.rollno);
	printf("name is :");
	scanf("%s",&s1.name);
	printf("pr is :");
	scanf("%f",&s1.pr);
	printf("roll no:%d,name is:%s,pr is :%f",s1.rollno,s1.name,s1.pr);
	
	
	union myunion u;
	u.intvalue = 45;
	printf("\ninteger value:%d\n",u.intvalue);
	
	u.floatvalue = 50;
	printf("\nfloat value :%f\n",u.floatvalue);

	return 0;
}