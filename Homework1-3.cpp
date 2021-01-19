#include<stdio.h>
int main(void)
{
	int a, b, c;
	puts("请输入两个不同整数a,b。");
	scanf_s("%d,%d", &a, &b);
	c = b, b = a, a = c;
	printf("运算的a,b分别为%d,%d。", a, b);
	return 0;
}