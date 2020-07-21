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
     int x[MAX_LEN+20], y[MAX_LEN+20], z[MAX_LEN+20];//+20����ֹԽ�� 
     char a[MAX_LEN+20], b[MAX_LEN + 20];
     
     scanf("%s",a);//���� 
     getchar(); 
     scanf("%s",b);

     char_to_int(a,x);//���� ��ת���� 
     char_to_int(b,y);

     big_int_add(x,y,z);//��� 

     big_int_print(z);//��� 

    return 0;
}

void char_to_int(const char s[], int x[])//�ַ���ת���ͳ��� 
{
    int i = 0;
    int len = strlen(s);    //strlen��string.h���
	//sizeof��C���Ե�һ���������������Ƿ���һ���������������ռ���ڴ��ֽ���  
    memset(x,0,sizeof(int)*(MAX_LEN+20));
    int j = 0;
    for(i=len-1; i>=0;i--)  //����ת�����Ѹ�λ��������λ���Ա����ӷ� 
    {
        x[j++]=s[i]-'0' ;        //'0'����ȥ������� 
    }
}

void big_int_add(const int x[],const int y[],int z[]) //��ӷ� 
{
    int i=0;
    
    memset(z,0,sizeof(int)*(MAX_LEN+20));
    for(i=0;i<MAX_LEN;i++)//ѭ��ɨ�� 
    {
        z[i] += x[i] + y[i];    //z[i]=z[i]+x[i]+y[i] 
        if(z[i] >=10)//�����㣬Ҫ��λ 
        {
            z[i] = z[i] - 10;  // ��1λ 
            z[i+1] ++; 
        }
    }
}

void big_int_print(const int z[])// ������� 
{
    int j = 0;//��־λ 
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

