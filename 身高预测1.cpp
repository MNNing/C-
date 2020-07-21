#include<stdio.h>
main()
{
	float faHeight,moHeight,B,G;
	char sex,sport,diet;
	printf("Please enter the faHeight and moHeight:");
	scanf("%f %f",&faHeight,&moHeight);
	
	printf("Choose your sex, F or M%c:",sex );
	scanf(" %c",&sex);
	if(sex=='F')	
	G=(faHeight*0.923+moHeight)/2;
	else
	B=(faHeight+moHeight)*0.54;
	printf("Are you like sports?,please choose Y/N:");
	scanf(" %c",&sport);
	if(sport=='Y')
	G=0.02*G+G;
	B=0.02*B+B;
	printf("Are you have a good diet?please choose Y/N:");
	scanf(" %c",&diet);
	if(diet='Y')
	G=0.015*G+G;
	B=0.015*B+B;
	printf("Your kid's height is:%f\n%f\n",B,G);
	return 0;
	 
	
}
