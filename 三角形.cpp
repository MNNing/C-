#include<stdio.h>
int main()
{
	float a,b,c;
	printf("�����������ε������ߣ�(a,b,c)\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if(a==b&&b==c)
		{
			 printf("�ȱ�������\n");
		}
		else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&c!=a))
		{
			printf("����������\n");
			
			if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
			  	   printf("����ֱ��������\n");
				
		}
		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) 
		{
		   	printf("ֱ��������\n");
		}
		else
		{
			printf("һ��������\n");
		}
	}
	else 
	{
		printf("�����������ܹ���������\n");
	}
	return 0;
}

	
