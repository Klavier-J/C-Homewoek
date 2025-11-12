#include<stdio.h>
int main(void)
{
	char ch;
	puts("请输入一个字符。");
	ch = getchar();
	if (ch >= 65 && ch <= 90)
	{
		puts("您输入的是一个大写字母。");
		ch = ch + 32;
		printf("其小写字母为%c。", ch);
	}
	else if (ch >= 97 && ch <= 122)
	{
		puts("您输入的是一个小写字母。");
		ch = ch - 32;
		printf("其大写字母为%c。", ch);
	}
	else
	{
		puts("您输入的不是一个字母。");
	}
	return 0;
}