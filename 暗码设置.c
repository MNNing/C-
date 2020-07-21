#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
main()
{
	int i,j;
	char b[6];
	char a[6];
	printf("请输入您的密码:\n");
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
	   printf("\n登录成功！");
	else
	   printf("\n登陆失败！");
	exit(0);
}
/*void main()
{
	long num1,num2;
	char a[10],c[10];
	char b[10];
	int i;
	printf("初次登陆，请注册一个账号.\n");
	printf("请输入用户名(不超过8位)：");
	scanf("%ld",&num1); 
	printf("请设置密码(不超过10位)：");
	scanf("%s",a);
	printf("请再次输入你的密码：");
	scanf("%s",c);
	while(strcmp(a,c)!=0)
	{
		printf("两次密码输入不一致，请重新输入：\n");
		printf("请再次输入你的密码：");
	    scanf("%s",c);
	}
	system("pause");
	system("cls");
	do
	{
		printf("请输入用户名：\n");
		scanf("%ld",&num2);
		printf("请输入密码:\n");
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
			printf("用户名或密码输入错误！\n");
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
		printf("请输入用户名：\n");
		scanf("%ld",&num2);
		printf("请输入密码:\n");
		scanf("%s",b);
		if(num2==num1&&strcmp(a,b)==0)
			i=0;
		else
		{
			printf("用户名或密码输入错误！\n");
			i=1;
			system("pause");
			system("cls");
		}
	}while(i==1);
	system("cls");
	
}
