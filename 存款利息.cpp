#include<stdio.h>
#include<math.h>
main()
{
	float rate,capital,depositis=0;
	int n;
	printf("Please enter the rate,year and capital:\n");
	scanf(" %f %d %f",&rate,&n,&capital);
	depositis=capital*pow(1+rate,n);
	printf("The depositis:%.2f\n",depositis);
	return 0;
}
