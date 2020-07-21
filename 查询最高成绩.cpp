#include <stdio.h>
#define  ARR_SIZE  5 
float FindMax(float arr[],int n);

main()
{  
	float  score[ARR_SIZE], maxScore;
	int    n, i;
	
	printf("Please enter total number:");
	scanf("%d", &n); 
	printf("Please enter the score:\n");
	for (i=0; i<n; i++) 
	{
   	scanf("%f", &score[i]);       
	}
	maxScore = FindMax(score,n);
	printf("maxScore = %.0f\n", maxScore);  
}
float FindMax(float arr[], int n)
{  
	float  max;
	int    i;
		
	max = arr[0];
	for (i=1; i<n; i++)                        
	{
    	if (arr[i] > max)                      
    	{  	
   		    max = arr[i];                     
    	}
	}
   return max;	
}

