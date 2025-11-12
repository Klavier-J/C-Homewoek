#include<stdio.h>
int main(void)
{
	char ch;
	for (ch = 32; ch <= 126; ch++)
	{
		printf("%c", ch);
	}
	return 0;
}