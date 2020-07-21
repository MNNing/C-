#include<stdio.h>
int main()
{
	long StudentID;
	char Name[10],Sex[4],Major[10],PhoneNo[20],E_mailAddress[20];
	int year,month,day;
	float Gpa; 
	printf("学号：");
    scanf("%ld",&StudentID);
    printf("姓名：");
    scanf("%s",Name);
    printf("性别:");
    scanf("%s",Sex);
    printf("出生年月日，(eg:1999 07 10):");
	scanf("%d%d%d",&year,&month,&day);
	printf("专业：");
	scanf("%s",Major);
	printf("加权平均分：");
	scanf("%f",&Gpa);
	printf("电话：");
	scanf("%s",PhoneNo);
	printf("邮箱地址：");
	scanf("%s",E_mailAddress);
	printf("%ld %s %s %d%d%d %s %f %s %s",StudentID,Name,Sex,year,month,day,Major,Gpa,PhoneNo,E_mailAddress);
} 
void PrintStInfo(struct STUDENT *pt)
{
	printf("请依次输入该学生的信息:\n");
	printf("学号：");
    scanf("%ld",&pt->StudentID);
    printf("姓名：");
    scanf("%s",pt->Name);
    printf("性别:");
    scanf("%s",pt->Sex);
    printf("出生年月日，(eg:1999 07 10):");
	scanf("%d%d%d",&pt->DateofBirth.year,&pt->DateofBirth.month,&pt->DateofBirth.day);
	printf("专业：");
	scanf("%s",pt->Major);
	printf("加权平均分：");
	scanf("%f",&pt->Gpa);
	printf("电话：");
	scanf("%s",pt->PhoneNo);
	printf("邮箱地址：");
	scanf("%s",pt->E_mailAddress);
	scanf("%ld%s%s%d%d%d%s%f%s%s",&st->StudentID,st->Name,st->Sex,
		      &st->DateofBirth.year,&st->DateofBirth.month,&st->DateofBirth.day,
			  st->Major,&st->Gpa,st->PhoneNo,st->E_mailAddress);
	
}  
	
	
	
	

