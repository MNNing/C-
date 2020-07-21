#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char name[5]={"A\\B"};
	n=strlen(name);
	printf("n=%d\n",n);
	printf("%s\n",name);
	return 0;
	
}
