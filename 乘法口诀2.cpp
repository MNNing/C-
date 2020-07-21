#include<stdio.h>
main()
{
	int m,n;
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
		for(n=1;n<=m;n++)
		{
			 printf("%4d",m*n);
		}
		printf("\n");	
	}
} 
