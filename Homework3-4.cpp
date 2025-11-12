#include<stdio.h>
#include<conio.h>
int main()
{
    char a = 0;
    int n = 0;
    printf("请输入偏移距离：");
    scanf_s("%d", &n);
    printf("请输入密文，将以明文形式输出：");
    while ((a = _getwch()) != '\r')
    {
        if (a >= 'a' && a <= 'z')
        {
            a = (a - 'a' + n) % 26 + 'a';
            putchar(a);
        }
        else if (a >= 'A' && a <= 'Z')
        {
            a = (a - 'A' + n) % 26 + 'A';
            putchar(a);
        }
        else
        {
            putchar(a);
        }
    }
    return 0;
}