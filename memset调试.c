#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200
void H(int y[]);
void P(int a[]);
int main(void)
 {
 	int x[SIZE+20];
 	H(x);
 	P(x);
 	return 0;
 }
 void H(int y[])
 {
 	memset(y,0,sizeof(int)*(SIZE+20));
 }
 void P(int a[])
 {
 	int i;
 	for(i=0;i<SIZE+20;i++)
 	{
 		printf("%d",a[i]);
 	}
 }
