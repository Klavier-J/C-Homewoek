#include<stdio.h>
int main(void)
{
	char a = 127;
	short b = 32768;
	int c = 2147483647;
	a = a + 1, b = b + 1, c = c + 1;
	printf("%d,%d,%d", a, b, c);
	return 0;
}