#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	printf("請輸入英文字母:"); 
	scanf("%c",&ch);
	if((ch>='A')&&(ch<='Z'))
	{
		ch+=32;
		printf("轉換後為%c\n",ch);
	}
	else if((ch>='a')&&(ch<='z'))
	{
		ch-=32;
		printf("轉換後是%c\n",ch);	
	}
	else
	{
		printf("請輸入英文字母!!\n");
	}
	system("PAUSE");
	return 0;
}
