#include<stdio.h>
int main()
{
	long StudentID;
	char Name[10],Sex[4],Major[10],PhoneNo[20],E_mailAddress[20];
	int year,month,day;
	float Gpa; 
	printf("ѧ�ţ�");
    scanf("%ld",&StudentID);
    printf("������");
    scanf("%s",Name);
    printf("�Ա�:");
    scanf("%s",Sex);
    printf("���������գ�(eg:1999 07 10):");
	scanf("%d%d%d",&year,&month,&day);
	printf("רҵ��");
	scanf("%s",Major);
	printf("��Ȩƽ���֣�");
	scanf("%f",&Gpa);
	printf("�绰��");
	scanf("%s",PhoneNo);
	printf("�����ַ��");
	scanf("%s",E_mailAddress);
	printf("%ld %s %s %d%d%d %s %f %s %s",StudentID,Name,Sex,year,month,day,Major,Gpa,PhoneNo,E_mailAddress);
} 
void PrintStInfo(struct STUDENT *pt)
{
	printf("�����������ѧ������Ϣ:\n");
	printf("ѧ�ţ�");
    scanf("%ld",&pt->StudentID);
    printf("������");
    scanf("%s",pt->Name);
    printf("�Ա�:");
    scanf("%s",pt->Sex);
    printf("���������գ�(eg:1999 07 10):");
	scanf("%d%d%d",&pt->DateofBirth.year,&pt->DateofBirth.month,&pt->DateofBirth.day);
	printf("רҵ��");
	scanf("%s",pt->Major);
	printf("��Ȩƽ���֣�");
	scanf("%f",&pt->Gpa);
	printf("�绰��");
	scanf("%s",pt->PhoneNo);
	printf("�����ַ��");
	scanf("%s",pt->E_mailAddress);
	scanf("%ld%s%s%d%d%d%s%f%s%s",&st->StudentID,st->Name,st->Sex,
		      &st->DateofBirth.year,&st->DateofBirth.month,&st->DateofBirth.day,
			  st->Major,&st->Gpa,st->PhoneNo,st->E_mailAddress);
	
}  
	
	
	
	

