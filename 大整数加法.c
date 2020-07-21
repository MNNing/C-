#include <stdio.h>              
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 200
void char_to_int(const char s[],int x[]);
void big_int_add(const int x[],const int y[],int z[]);
void big_int_print(const int z[]);

int main(void)
{
	int i;
     int x[MAX_LEN+20], y[MAX_LEN+20], z[MAX_LEN+20];//+20，防止越界 
     char a[MAX_LEN+20], b[MAX_LEN + 20];
     
     scanf("%s",a);//输入 
     getchar(); 
     scanf("%s",b);

     char_to_int(a,x);//调用 ，转类型 
     char_to_int(b,y);

     big_int_add(x,y,z);//求和 

     big_int_print(z);//输出 

    return 0;
}

void char_to_int(const char s[], int x[])//字符串转整型常量 
{
    int i = 0;
    int len = strlen(s);    //strlen是string.h里的
	//sizeof是C语言的一个操作符，作用是返回一个对象或者类型所占的内存字节数  
    memset(x,0,sizeof(int)*(MAX_LEN+20));
    int j = 0;
    for(i=len-1; i>=0;i--)  //倒着转换，把个位数放在首位，以便做加法 
    {
        x[j++]=s[i]-'0' ;        //'0'不能去，会出错 
    }
}

void big_int_add(const int x[],const int y[],int z[]) //算加法 
{
    int i=0;
    
    memset(z,0,sizeof(int)*(MAX_LEN+20));
    for(i=0;i<MAX_LEN;i++)//循环扫描 
    {
        z[i] += x[i] + y[i];    //z[i]=z[i]+x[i]+y[i] 
        if(z[i] >=10)//倒着算，要进位 
        {
            z[i] = z[i] - 10;  // 进1位 
            z[i+1] ++; 
        }
    }
}

void big_int_print(const int z[])// 输出函数 
{
    int j = 0;//标志位 
    int i = 0;

    for(i =MAX_LEN;i>=0;i--)
    {
        if(j)
            printf("%d",z[i]);
        else if(z[i])
        {
            printf("%d",z[i]);
            j = 1;
        }
    }

    if(!j)
        printf("0");
    printf("\n");
}

