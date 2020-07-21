#include<stdio.h>
int main(void)
{
	int m,n,fac=1,sum=0;
	for(m=1;m<=10;m++)
	{
		for(n=1,fac=1;n<=m;n++)
		{
			fac=fac*n;
		}
		sum=sum+fac;
	}
	printf("The result is:%d\n",sum);
	return 0;
} 
