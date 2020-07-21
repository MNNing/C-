#include<stdio.h>
int Add(int i,int j);
int main (void)
{
	int a,b,c,sum=0,m=0;
	printf("Input a,b:");
	scanf("%d£¬%d",&a,&b);
	sum=Add(a,b);
	
	
	do
	{
		m++;
		printf("a+b=",c);
		scanf("%d",&c);
		if(c==sum)
		{
			printf("\nRight!");
		}
		else if(c!=sum&&m!=3)
		{
			printf("\nNot correct. Try again!\n");
		}
		else if(c!=sum&&m==3)
		{
			printf("Not correct. You have tried three times!\nTest over!");
		}
	}while(c!=sum&&m<3);

	
	
}
int Add(int i,int j)
{
	int result=i+j;
	return result;
}
