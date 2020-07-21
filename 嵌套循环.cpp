#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("i=%-4d",i);
		for(j=1;j<=5;j++)
		{
			printf("j=%-4d",j);
		}
		printf("\n");
	}
}
