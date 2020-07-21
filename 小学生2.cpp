#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	int a[10],b[10];
	int i,c,score=0,n=0,op;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%10+1;
		b[i]=rand()%10+1;
	}
	for(i=0;i<10;i++)
	{
		op=rand()%4+1;
		switch(op)
		{
			case 1:
				printf("%d+%d=",a[i],b[i]);
				scanf("%d",&c);
				if(c==a[i]+b[i])
				{
					printf("right!\n");
					score=score+10;
				}
				else
				{
					printf("Not correct!\n");
					n=n+1;
				}
				break;
			case 2:
				printf("%d-%d=",a[i],b[i]);
				scanf("%d",&c);
				if(c==a[i]-b[i])
				{
					printf("right!\n");
					score=score+10;
				}
				else
				{
					printf("Not correct!\n");
					n=n+1;
				}
				break;
			case 3:
				printf("%d*%d=",a[i],b[i]);
				scanf("%d",&c);
				if(c==a[i]*b[i])
				{
					printf("right!\n");
					score=score+10;
				}
				else
				{
					printf("Not correct!\n");
					n=n+1;
				}
				break;
			case 4:
				printf("%d/%d=",a[i],b[i]);
				scanf("%d",&c);
				if(c==a[i]/b[i])
				{
					printf("right!\n");
					score=score+10;
				}
				else
				{
					printf("Not correct!\n");
					n=n+1;
				}
				break;
			default:
				printf("Unknow operator!\n");
			
		}
		
	}
	printf("score=%d,error numbers=%d",score,n);
	return 0;
}
