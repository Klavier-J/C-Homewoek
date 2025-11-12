#include<stdio.h>
int main(void)
{
    char a, b = 0, c = 0, d = 0, e = 0;
    while ((a = getchar()) != '\n')
    {
        if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
            b++;
        else if (a >= 48 && a <= 57)
            c++;
        else if (a == ' ' || a == '\t')
            d++;
        else
            e++;
    }
    printf("字母字符有%d个。\n", b);
    printf("数字字符有%d个。\n", c);
    printf("空格字符有%d个。\n", d);
    printf("其他字符有%d个。\n", e);
    return 0;
}