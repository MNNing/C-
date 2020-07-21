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
	printf("��������ݣ�");
	scanf("%d",&year);
	printf("\n�������º��գ�");
	scanf("%d%d",&month,&day);
	day1=DayofYear(year,month,day);
	printf("����%d��ĵ�%d�졣\n",year,day1);
	printf("��������ݣ�");
	scanf("%d",&year);
	printf("\n������������");
	scanf("%d",&day);
	MonthDay(year,day,pMonth,pDay);
	printf("����%d��%d��%d��.\n",year,*pMonth,*pDay);
	return 0;
	
	
}
/*�������ܣ��Ը�����ĳ��ĳ��ĳ�գ������������һ��ĵڼ���
  �������������ͱ���year��month��day���ֱ�����ꡢ�¡���          
  ��������ֵ����һ��ĵڼ���
*/
int  DayofYear(int year, int month, int day)
{ 
	int  i, leap;
	static int dayTab[2][13] =
 			   	     {{0,31,28,31,30,31,30,31,31,30,31,30,31},
    		           {0,31,29,31,30,31,30,31,31,30,31,30,31}}; 

	
   /*��yearΪ����,��leapֵΪ1,���õ�2��Ԫ��dayTab[1][i]����,
	  ����leapֵΪ0���õ�1��dayTab[0][i]����*/
	leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
	for (i=1; i<month; i++)
	{
    	day = day + dayTab[leap][i];     
	}
	return day;              /*���ؼ������day��ֵ*/
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
	*pMonth = i;      /*����������·�ֵ��ֵ��pMonth��ָ��ı���*/
	*pDay = yearDay;   /*����������պŸ�ֵ��pDay��ָ��ı���*/
}

