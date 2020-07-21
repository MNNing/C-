#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	double an;
	printf("Please enter a interge n,n>=3:\n");
	scanf("%d",&n);
	
	/*
	double ij=1+sqrt(5);
	double ik=1-sqrt(5);
	
	double a=sqrt(0.2);
	double b= pow(ij/2,n);
	double c=pow(ik/2,n);
	
	an=a*(b-c);
	*/
	an=(1/sqrt(5))*(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n));
	printf("The result is:%f\n",an);
	return 0;
	 
	
} 
