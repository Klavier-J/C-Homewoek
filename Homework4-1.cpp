#include<stdio.h>
#include<conio.h>
int main()
{
	char c, sign = 1, ifNumInput = 0, numStart = 0;
	int s = 0;
	while ((c = _getwch()) != '\r')//输入数字
	{
		if (c == '-' && numStart == 0)//第一个输入负号
		{
			sign = -1;
			numStart = 1;
			putchar('-');
		}
		else if (c >= '0' && c <= '9')//0-9：接受
		{
			putchar(c);
			s = s * 10 + c - '0';//迭代输入数字
			numStart = 1;
			ifNumInput = 1;
		}
		else//其余情况
			putchar('\07');//报警
	}
	if (ifNumInput)//按下回车若有数字输入
	{
		s = s * sign;
		printf("\n%d", s);
	}
	else//没有正确输入或没有输入
		printf("No number input!");
	return 0;
}