#include <stdio.h>
#define  ARR_SIZE  5 
main()
{  
	float  score[ARR_SIZE], maxScore;
	int    n, i;
	long   maxNum, num[ARR_SIZE];
	printf("Please enter total number:");
	scanf("%d", &n); 
	printf("Please enter the number and score:\n");
	for (i=0; i<n; i++) 
	{
   	scanf("%ld%f", &num[i], &score[i]);       
	}
	maxScore = score[0];
	maxNum = num[0];                    
	for (i=1; i<n; i++)                        
	{
    	if (score[i] > maxScore)                      
    	{  	
   	    maxScore = score[i];                     
     	    maxNum = num[i];                 
    	}
	}
	printf("maxScore = %.0f, maxNum = %ld\n", maxScore, maxNum);  
}

