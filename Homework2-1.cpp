#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	puts("请输入一个三位整数。");
	scanf_s("%d", &a);
	b = a / 100;
	c = a / 10 - 10 * b;
	d = a - 100 * b - 10 * c;
	printf("其个位，十位，百位数字分别为%d,%d,%d。", d, c, b);
	return 0;
}