#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入分数：");
	scanf_s("%d", &a);
	b = a / 10;
	switch (b)
	{
	case(10):
		puts("等级为A 。");
		break;
	case(9):
		puts("等级为A 。");
		break;
	case(8):
		puts("等级为B 。");
		break;
	case(7):
		puts("等级为C 。");
		break;
	case(6):
		puts("等级为D 。");
		break;
	default:
		puts(" 等级为E。");
		break;
	}
	return 0;
}