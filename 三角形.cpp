#include<stdio.h>
int main()
{
	float a,b,c;
	printf("请输入三角形的三条边：(a,b,c)\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if(a==b&&b==c)
		{
			 printf("等边三角形\n");
		}
		else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&c!=a))
		{
			printf("等腰三角形\n");
			
			if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
			  	   printf("等腰直角三角形\n");
				
		}
		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) 
		{
		   	printf("直角三角形\n");
		}
		else
		{
			printf("一般三角形\n");
		}
	}
	else 
	{
		printf("这三个数不能构成三角形\n");
	}
	return 0;
}

	
