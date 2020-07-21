#include<stdio.h>
main()
{
	int m,n,i;
	for(m=1;m<10;m++)
	{
		printf("%4d",m);
	}
	printf("\n");
	for(m=1;m<10;m++)
	{
		printf("   -",m);
	}
	printf("\n");
	for(m=1;m<10;m++)
	{
		for(i=1;i<=4*m-4;i++)
		{
			printf(" ");
		}
		for(n=m;n<10;n++)
		{
			 printf("%4d",m*n);
		}
		printf("\n");	
	}
} 
