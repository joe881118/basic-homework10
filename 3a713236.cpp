#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	printf("�п�J�^��r��:"); 
	scanf("%c",&ch);
	if((ch>='A')&&(ch<='Z'))
	{
		ch+=32;
		printf("�ഫ�ᬰ%c\n",ch);
	}
	else if((ch>='a')&&(ch<='z'))
	{
		ch-=32;
		printf("�ഫ��O%c\n",ch);	
	}
	else
	{
		printf("�п�J�^��r��!!\n");
	}
	system("PAUSE");
	return 0;
}
