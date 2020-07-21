#include<stdio.h>
main()
{
	int a,b,c,Feb,days;
	printf("Please enter one day's date:,eg:20160401:\n");
	scanf("%4d%2d%2d",&a,&b,&c);
	printf("year=%d,mouth=%d,day=%d\n",a,b,c);
	
	if (a%400==0||(a%4==0&&a%100!=0))   
      
        Feb=29;  
      
    else   
        Feb=28;  
  
	if(b==1)
	days=c;
	else if(b==2)
	days=31+c;
	else if(b==3)
	days=31+Feb+c;
	else if(b==4)
	days=31+Feb+31+c;
	else if(b==5)
	days=31+Feb+31+30+c;
	else if(b==6)
	days=31+Feb+31+30+31+c;
	else if(b==7)
	days=31+Feb+31+30+31+30+c;
	else if(b==8)
	days=31+Feb+31+30+31+30+31+c;
	else if(b==9)
	days=31+Feb+31+30+31+30+31+31+c;
	else if(b==10)
	days=31+Feb+31+30+31+30+31+31+30+c;
	else if(b==11)
	days=31+Feb+31+30+31+30+31+31+30+31+c;
	else if(b==12)
	days=31+Feb+31+30+31+30+31+31+30+31+30+c;
	else
	printf("Input error!\n");
	printf("This day is the number:%d",days);
	return 0;
	
} 
