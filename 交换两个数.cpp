#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	a=1;
	b=3;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int term;
	term=*x;
	*x=*y;
	*y=term;
}
