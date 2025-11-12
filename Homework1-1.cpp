#include<stdio.h>
#include<math.h>
int main(void)
{
	float a, b, c, x1, x2, delt;
	printf("请输入一元二次方程的参数a,b,c：");
	scanf_s("%f,%f,%f", &a, &b, &c);
	delt = b * b - 4 * a * c;
	if (delt >= 0)
	{
		x1 = (-b + sqrt(delt)) / 2 / a;
		x2 = (-b - sqrt(delt)) / 2 / a;
		printf("x1=%f,x2=%f\n", x1, x2);
	}
	else
	{
		float m, n;
		m = -b / 2 / a;
		n = sqrt(-delt) / 2 / a;
		puts("该方程没有实数根。");
		printf("x1=%f+%fi,x2=%f-%fi。", m, n, m, n);
	}
	return 0;
}