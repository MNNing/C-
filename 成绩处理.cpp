#include<stdio.h>
#include<time.h>
#define ARR_SIZE 30

int   	ReadScore(int num[], float score[]);
int   	GetFail(int num[], float score[], int n);
float  	GetAver(float score[], int n);
int   	GetAboveAver(int num[], float score[], int n);
void  	GetDetail(float score[], int n);

main()
{
 	int    n, num[ARR_SIZE], fail, aboveAver;
	float  score[ARR_SIZE],Aver;
	int    i=0;
	int    count=0;
	

	printf("Please enter num and score until score<0:\n");
	n = ReadScore(num, score);
	printf("Total students:%d\n", n);

	fail = GetFail(num, score, n);
	printf("Fail students = %d\n",fail);

	
	aboveAver = GetAboveAver(num, score, n);
	printf("Above aver students = %d\n", aboveAver);

	GetDetail(score, n);
}
int ReadScore(int num[],float score[])
{
    int i=0;
	
	for(i=0;i<=30;i++)
	{
		scanf("%d%f",&num[i],&score[i]);
		if(score[i]<1e-10)
		break;
	}
	return i;
}

int GetFail(int num[],float score[],int n)
{
	int i=0;
	int count=0;
	
	for(i=0;i<n;i++)
	{
		if(score[i]<60)
		{
			count++;
			printf("fail number:%d---score:%.2f\n",num[i],score[i]);
		}
	}
	
	return count;
	
}





float  GetAver(float score[], int n)
{
	    int i=0;
		int sum=0;
	    int Aver;
	    
	    
	    for(i=0;i<n;i++)
	    {
	    	sum=sum+score[i];
		}
		
		Aver=sum/n;
		return Aver;
}

int    GetAboveAver(int num[], float score[], int n)
{
	    
		int i=0;
		int count=0;
		float Aver= GetAver(score,n);
	    printf("Aver=%.2f\n",Aver);
		printf("AboveAver:\t\n");
		for(i=0;i<n;i++)
		{
			if(score[i]>Aver)
			{
				count++;
				printf("number:\t	%d	---score:%.2f\n",num[i],score[i]);
			}
			
		} 
		 
		return count;
}



void GetDetail(float score[],int n)
{
	int stu[6]={0};
	int i=0;
	
	for(i=0;i<n;i++)
	{
		if(score[i]<60)
		{
			stu[0]++;
		}
		else if(score[i]>=60&&score[i]<70)
		{
		    stu[1]++;	
		}
		else if(score[i]>=70&&score[i]<80)
		{
			stu[2]++;
		}
		else if(score[i]>=80&&score[i]<90)
		{
			stu[3]++;
		}
		else if(score[i]>=90&&score[i]<=99)
		{
			stu[4]++;
		}
		else if(score[i]==100)
		{
			stu[5]++;
			 
		}
	}
		printf("<60			%d			%2.f%%\n ",stu[0],stu[0]*100/(float)n);
		printf("60-69			%d			%2.f%%\n ",stu[1],stu[1]*100/(float)n);
		printf("70-79			%d			%2.f%%\n ",stu[2],stu[2]*100/(float)n);
		printf("80-89			%d			%2.f%%\n ",stu[3],stu[3]*100/(float)n);
		printf("90-99			%d			%2.f%%\n ",stu[4],stu[4]*100/(float)n);
		printf("100			%d			%2.f%%\n ",stu[5],stu[5]*100/(float)n);	
}
