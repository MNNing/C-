/*ϴ�ƺͷ���ģ��*/ 
#include<stdio.h>
#include<string.h>
struct CARD
{
	char suit[10];
	char face[10];
} ;
void  FillCard (struct CARD wCard[],char *wFace[],char *wSuit[]);
void Shuffle (struct CARD *wCard);
void Deal(struct CARD *wCard);
int main (void)
{
	char *suit[]= {"Spades","Hearts","Clubs","Diamonds"};//����  ����   �ݻ�  ��Ƭ 
	char *face[] = {"A","2","3","4","5","6","7","8","9",
                  "10","jack","Queen","King"};  
    struct CARD card[52];      
	
	srand (time(NULL));

	FillCard (card, face, suit);
	Shuffle (card);
	Deal (card);
	return 0;
}
/*	�������ܣ���52���ư����ҡ����ҡ��ݻ������黨ɫ˳����ֵ��A~K  
                           ��˳������
	�����������ṹ������wCard[]����ʾ��ͬ��ɫ����ֵ��52����
		           ָ�����wFace����ʾָ����ֵ�ַ�������face[]��ָ��
		           ָ�����wSuit����ʾָ��ɫ�ַ�������suit[]��ָ��
	��������ֵ����
*/
void  FillCard (struct CARD wCard[],char *wFace[],char *wSuit[])
{
	int	i;

	for (i=0; i<52; i++)
	{
		strcpy (wCard[i].suit, wSuit [i / 13]);
		strcpy (wCard[i].face, wFace [i%13]);
	}
}
/*	�������ܣ���52���Ƶ�˳����ң�
	�����������ṹ���������wCard[]����ʾ52����
	��������ֵ����
*/
void Shuffle (struct CARD *wCard)
{
	int    i,j;
	struct CARD temp;

	for (i=0; i<52; i++)
	{
		j = rand()%52;                        /*j = random(52);TC�Ŀ⺯��*/
		temp = wCard[i]; 
		wCard[i] = wCard[j];
		wCard[j] = temp;	                 /* ϴ�ƹ��� */
	}
}
/*�������ܣ�������ƽ��
   �����������ṹ���������wCard[]����ʾ��52����
   ��������ֵ����
*/
void Deal(struct CARD *wCard)
{
	int i;

	for (i=0; i<52; i++)	/*������ƽ��*/
		printf("%10s%10s\n", wCard[i].suit, wCard[i].face);
}

