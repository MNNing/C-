#include<stdio.h>
int main()
{
	float sheep[10];
	float max;
	int i,j;
	max=0.0;
	
	for(i=0;i<10;i++)
	{   
	    printf("请输入羊的重量：\n");
		scanf("%f",&sheep[i]);
		if(sheep[i]>max)
		{
			max=sheep[i];
			j=i;
		}
		   
	}
	printf("max=%f",max);
	printf("最重的羊编号是：%d",j);
	return 0;

}
