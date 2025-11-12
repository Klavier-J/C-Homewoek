#include<stdio.h>
int main()
{
	int form = 0;
	float a;
	printf("请输入一个浮点数：");
	scanf_s("%f", &a);
	puts("1.计算以f为边长的正方形的面积；");
	puts("2.计算以f为棱长的立方体的体积；");
	puts("3.计算以f为半径的圆的面积；");
	puts("4.计算以f为半径的球的体积；");
	puts("请选择要计算的项目：");
	scanf_s("%d", &form);
	switch (form)
	{
	case 1:
		float Ssquare;
		Ssquare = a * a;
		printf("正方形面积为%f。", Ssquare);
		break;
	case 2:
		float Vcube;
		Vcube = a * a * a;
		printf("立方体体积为%f。", Vcube);
		break;
	case 3:
		float Scircle;
		Scircle = 3.1415926 * a * a;
		printf("圆的面积为%f。", Scircle);
		break;
	case 4:
		float Vball;
		Vball = 4 * 3.1415926 * a * a * a / 4;
		printf("球的体积为%f。", Vball);
		break;
	default:
		printf("What are you 弄啥嘞？");
		break;
	}
	return 0;
}