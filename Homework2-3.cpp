#include<stdio.h>
int main(void)
{
	float TF, TC;
	puts("请输入华氏温度。(纯整数数字形式)");
	scanf_s("%f", &TF);
	TC = 5 * (TF - 32) / 9;
	printf("对应的摄氏温度为%f。", TC);
	return 0;
}