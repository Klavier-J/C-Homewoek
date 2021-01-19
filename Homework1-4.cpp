#include<stdio.h>
int main(void)
{
	int number;
	puts("请输入一个大小合适的整数。");
	scanf_s("%d", &number);
	printf("其八进制形式为%o。\n", number);
	printf("其十进制形式为%d。\n", number);
	printf("其十六进制形式为%x。\n", number);
	return 0;
}