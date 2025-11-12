#include<stdio.h>
int main()
{
	int a;
	printf("请输入分数：");
	scanf_s("%d", &a);
	if (a <= 100 && a >= 90)
		puts("等级为A。");
	else if (a <= 89 && a >= 80)
		puts("等级为B。");
	else if (a <= 79 && a >= 70)
		puts("等级为C。");
	else if (a <= 69 && a >= 60)
		puts("等级为D。");
	else
		puts("等级为E。");
	return 0;
}