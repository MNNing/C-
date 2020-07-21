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
	int x[MAX_LEN + 20], y[MAX_LEN + 20], z[MAX_LEN + 20];//+20����ֹԽ�� 
    char a[MAX_LEN + 20], b[MAX_LEN + 20];


    scanf("%s",a);//���� 
    scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
    max=len1>len2?len1:len2;

    char_to_int(a,x);//���� ��ת���� 
    char_to_int(b,y);

    big_int_add(x,y,z);//��� 

    big_int_print(z,max);//��� 

    return 0;



}

void big_int_print(const int z[],int max)// ������� 
{
    bool flag = 0;//��־λ 
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

void big_int_add(const int x[], const int y[], int z[]) //��ӷ� 
{
    int i = 0;
    memset(z,0,MAX_LEN + 20);  //����z��ʼ��Ϊ0 

    for(i = 0; i < MAX_LEN; i++)//ѭ��ɨ�� 
    {
        z[i] += x[i] + y[i];    //z[i]=z[i]+x[i]+y[i] 
        if(z[i] >=10)//�����㣬Ҫ��λ 
        {
            z[i] = z[i] - 10;  // ��1λ 
            z[i+1] ++; 
        }
    }
}

void char_to_int(const char s[ ], int x[ ])//�ַ���ת���ͳ��� 
{
    int i = 0;
    int len = strlen(s);    //strlen��string.h��� 

    memset(x,0,MAX_LEN + 20);   //����x��ʼ��Ϊ0 
    int j  = 0;
    for(i = len - 1; i >= 0; i--)  //����ת�����Ѹ�λ��������λ���Ա����ӷ� 
    {
        x[j++] = s[i]-'0' ;        //��0������ȥ������� 
    }
}

