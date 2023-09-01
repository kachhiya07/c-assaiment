//WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="abhi";
	//printf("%s",strrev(name));
	int i,length;
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	printf("%d",length);
}