#include<stdio.h>
main()
{
	float faHeight,moHeight,Height;
	char sex,sport,diet;
	printf("Please enter the faHeight and moHeight:");
	scanf("%f %f",&faHeight,&moHeight);
	
	printf("Choose your sex, F or M%c:",sex );
	scanf(" %c",&sex);
	if(sex=='F')	
	Height=(faHeight*0.923+moHeight)/2;
	else
	Height=(faHeight+moHeight)*0.54;
	printf("Are you like sports?,please choose Y/N:");
	scanf(" %c",&sport);
	if(sport=='Y')
	Height=0.02*Height+Height;
	printf("Are you have a good diet?please choose Y/N:");
	scanf(" %c",&diet);
	if(diet=='Y')
	Height=0.015*Height+Height;
	printf("Your kid's height is:%f\n",Height);
	return 0;
	
	
}
