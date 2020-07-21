#include<stdio.h>
int  DayofYear(int year, int month, int day);
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay);
int main (void)
{
	int year,month,day;
	int day1,month0,day0;
	int *pMonth,*pDay;
	pMonth=&month0;
	pDay=&day0;
	printf("请输入年份：");
	scanf("%d",&year);
	printf("\n请输入月和日：");
	scanf("%d%d",&month,&day);
	day1=DayofYear(year,month,day);
	printf("这是%d年的第%d天。\n",year,day1);
	printf("请输入年份：");
	scanf("%d",&year);
	printf("\n请输入天数：");
	scanf("%d",&day);
	MonthDay(year,day,pMonth,pDay);
	printf("这是%d年%d月%d日.\n",year,*pMonth,*pDay);
	return 0;
	
	
}
/*函数功能：对给定的某年某月某日，计算出它是这一年的第几天
  函数参数：整型变量year、month、day，分别代表年、月、日          
  函数返回值：这一年的第几天
*/
int  DayofYear(int year, int month, int day)
{ 
	int  i, leap;
	static int dayTab[2][13] =
 			   	     {{0,31,28,31,30,31,30,31,31,30,31,30,31},
    		           {0,31,29,31,30,31,30,31,31,30,31,30,31}}; 

	
   /*若year为闰年,则leap值为1,就用第2行元素dayTab[1][i]计算,
	  否则leap值为0，用第1行dayTab[0][i]计算*/
	leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
	for (i=1; i<month; i++)
	{
    	day = day + dayTab[leap][i];     
	}
	return day;              /*返回计算出的day的值*/
}
void  MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
	static int dayTab[2][13] =
 			   	     {{0,31,28,31,30,31,30,31,31,30,31,30,31},
    		           {0,31,29,31,30,31,30,31,31,30,31,30,31}}; 

	int  i, leap;
	leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);    
	for (i=1; yearDay>dayTab[leap][i]; i++)
	{
    	yearDay = yearDay - dayTab[leap][i];
	}
	*pMonth = i;      /*将计算出的月份值赋值给pMonth所指向的变量*/
	*pDay = yearDay;   /*将计算出的日号赋值给pDay所指向的变量*/
}

