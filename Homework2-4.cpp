#include<stdio.h>
int main(void)
{
	char a;
	puts("请输入一个字母。");
	a = getchar();
	printf("其ASCII码为%d。", a);
	return 0;
}