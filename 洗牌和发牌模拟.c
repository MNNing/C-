/*洗牌和发牌模拟*/ 
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
	char *suit[]= {"Spades","Hearts","Clubs","Diamonds"};//黑桃  红桃   草花  方片 
	char *face[] = {"A","2","3","4","5","6","7","8","9",
                  "10","jack","Queen","King"};  
    struct CARD card[52];      
	
	srand (time(NULL));

	FillCard (card, face, suit);
	Shuffle (card);
	Deal (card);
	return 0;
}
/*	函数功能：将52张牌按黑桃、红桃、草花、方块花色顺序，面值按A~K  
                           的顺序排列
	函数参数：结构体数组wCard[]，表示不同花色和面值的52张牌
		           指针变量wFace，表示指向面值字符串数组face[]的指针
		           指针变量wSuit，表示指向花色字符串数组suit[]的指针
	函数返回值：无
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
/*	函数功能：将52张牌的顺序打乱，
	函数参数：结构体数组变量wCard[]，表示52张牌
	函数返回值：无
*/
void Shuffle (struct CARD *wCard)
{
	int    i,j;
	struct CARD temp;

	for (i=0; i<52; i++)
	{
		j = rand()%52;                        /*j = random(52);TC的库函数*/
		temp = wCard[i]; 
		wCard[i] = wCard[j];
		wCard[j] = temp;	                 /* 洗牌过程 */
	}
}
/*函数功能：输出发牌结果
   函数参数：结构体数组变量wCard[]，表示有52张牌
   函数返回值：无
*/
void Deal(struct CARD *wCard)
{
	int i;

	for (i=0; i<52; i++)	/*输出发牌结果*/
		printf("%10s%10s\n", wCard[i].suit, wCard[i].face);
}

