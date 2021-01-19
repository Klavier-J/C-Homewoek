#include<stdio.h>
int main(void)
{
	float a, b, c, S, V;
	puts("请输入立方体的长宽高。");
	scanf_s("%f,%f,%f", &a, &b, &c);
	S = 2 * a * b + 2 * a * c + 2 * b * c;
	V = a * b * c;
	printf("该立方体的表面积为%f，体积为%f。", S, V);
	return 0;
}