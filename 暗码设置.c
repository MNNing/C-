#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
main()
{
	int i,j;
	char b[6];
	char a[6];
	printf("��������������:\n");
/*	scanf("%s",b);
	printf(" %s",b);*/
	for(i=0;i<6;i++)
	{
		a[i]=getch();
		putch('*');
	}
	for(i=0;i<6;i++)
	{
		printf(" %c",a[i]);
	}
	
	if(strcmp(a,b)==0)
	   printf("\n��¼�ɹ���");
	else
	   printf("\n��½ʧ�ܣ�");
	exit(0);
}
/*void main()
{
	long num1,num2;
	char a[10],c[10];
	char b[10];
	int i;
	printf("���ε�½����ע��һ���˺�.\n");
	printf("�������û���(������8λ)��");
	scanf("%ld",&num1); 
	printf("����������(������10λ)��");
	scanf("%s",a);
	printf("���ٴ�����������룺");
	scanf("%s",c);
	while(strcmp(a,c)!=0)
	{
		printf("�����������벻һ�£����������룺\n");
		printf("���ٴ�����������룺");
	    scanf("%s",c);
	}
	system("pause");
	system("cls");
	do
	{
		printf("�������û�����\n");
		scanf("%ld",&num2);
		printf("����������:\n");
		for( i=0;i<6;i++)
		{
			b[i]=getch();
			putch('*');
		}
		if(num2==num1&&strcmp(a,b)==0)
			{
				i=0;
				printf("lll");
			}
		else
		{
			printf("�û����������������\n");
			i=1;
			system("pause");
			system("cls");
		}
	}while(i==1);
}*/
void Log_on()
{
	long num1=17080224,num2;
	char a[7]={"123456"};
	char b[7];
	int i;
	do
	{
		printf("�������û�����\n");
		scanf("%ld",&num2);
		printf("����������:\n");
		scanf("%s",b);
		if(num2==num1&&strcmp(a,b)==0)
			i=0;
		else
		{
			printf("�û����������������\n");
			i=1;
			system("pause");
			system("cls");
		}
	}while(i==1);
	system("cls");
	
}
