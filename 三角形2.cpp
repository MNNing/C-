#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,a2,b2,c2;
	printf("请输入三角形的三条边的平方：(a*a,b*b,c*c)\n");
	scanf("%f%f%f",&a2,&b2,&c2);
	a=sqrt(a2);
	b=sqrt(b2);
	c=sqrt(c2);
	printf("a=%f,b=%f,c=%f\n",a,b,c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if(a==b&&b==c)
		{
			 printf("等边三角形\n");
		}
		else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&c!=a))
		{
			if(a2==b2+c2||b2==a2+c2||c2==a2+b2)
			  	printf("等腰直角三角形\n");
			else
			    printf("等腰三角形\n"); 
				
		}
		else if(a2==b2+c2||b2==a2+c2||c2==a2+b2) 
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
		printf("这三个数的平方不能构成三角形\n");
	}
	return 0;
}

	
