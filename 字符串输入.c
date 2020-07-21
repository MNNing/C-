#include<stdio.h>
struct STUDENT
{
	long StudentID;
	char Name[10];
	char Sex[4];
	char Major[20]; 
	float Gpa;
	long PhoneNo;
	char E_mailAddress[20];

} ;
int main(void)
{
	int i;
	struct STUDENT *pt,student1;
	pt=&student1;
	printf("...\n");
	scanf("%s",pt->Name);
	printf("%s",pt->Name);
	return 0;
} 
