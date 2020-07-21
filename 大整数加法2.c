#include <stdio.h>              
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 200
void big_int_print(const int z[],int max); 
void big_int_add(const int x[], const int y[], int z[]);
void char_to_int(const char s[ ], int x[ ]);
int main( )
{
	int max,len1,len2;
	int x[MAX_LEN + 20], y[MAX_LEN + 20], z[MAX_LEN + 20];//+20，防止越界 
    char a[MAX_LEN + 20], b[MAX_LEN + 20];


    scanf("%s",a);//输入 
    scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
    max=len1>len2?len1:len2;

    char_to_int(a,x);//调用 ，转类型 
    char_to_int(b,y);

    big_int_add(x,y,z);//求和 

    big_int_print(z,max);//输出 

    return 0;



}

void big_int_print(const int z[],int max)// 输出函数 
{
    bool flag = 0;//标志位 
    int i = 0;

    for(i = max; i >=0; i--)
    {
        if(flag)
            printf("%d",z[i]);
        else if(z[i])
        {
            printf("%d",z[i]);
            flag = 1;
        }
    }

    if(!flag)
        printf("0");
    printf("\n");
}

void big_int_add(const int x[], const int y[], int z[]) //算加法 
{
    int i = 0;
    memset(z,0,MAX_LEN + 20);  //数组z初始化为0 

    for(i = 0; i < MAX_LEN; i++)//循环扫描 
    {
        z[i] += x[i] + y[i];    //z[i]=z[i]+x[i]+y[i] 
        if(z[i] >=10)//倒着算，要进位 
        {
            z[i] = z[i] - 10;  // 进1位 
            z[i+1] ++; 
        }
    }
}

void char_to_int(const char s[ ], int x[ ])//字符串转整型常量 
{
    int i = 0;
    int len = strlen(s);    //strlen是string.h里的 

    memset(x,0,MAX_LEN + 20);   //数组x初始化为0 
    int j  = 0;
    for(i = len - 1; i >= 0; i--)  //倒着转换，把个位数放在首位，以便做加法 
    {
        x[j++] = s[i]-'0' ;        //‘0’不能去，会出错 
    }
}

