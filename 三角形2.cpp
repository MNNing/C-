#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,a2,b2,c2;
	printf("�����������ε������ߵ�ƽ����(a*a,b*b,c*c)\n");
	scanf("%f%f%f",&a2,&b2,&c2);
	a=sqrt(a2);
	b=sqrt(b2);
	c=sqrt(c2);
	printf("a=%f,b=%f,c=%f\n",a,b,c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if(a==b&&b==c)
		{
			 printf("�ȱ�������\n");
		}
		else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&c!=a))
		{
			if(a2==b2+c2||b2==a2+c2||c2==a2+b2)
			  	printf("����ֱ��������\n");
			else
			    printf("����������\n"); 
				
		}
		else if(a2==b2+c2||b2==a2+c2||c2==a2+b2) 
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
		printf("����������ƽ�����ܹ���������\n");
	}
	return 0;
}

	
