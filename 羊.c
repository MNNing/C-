#include<stdio.h>
int main()
{
	float sheep[10];
	float max;
	int i,j;
	max=0.0;
	
	for(i=0;i<10;i++)
	{   
	    printf("���������������\n");
		scanf("%f",&sheep[i]);
		if(sheep[i]>max)
		{
			max=sheep[i];
			j=i;
		}
		   
	}
	printf("max=%f",max);
	printf("���ص������ǣ�%d",j);
	return 0;

}
