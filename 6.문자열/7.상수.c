#include <stdio.h>

static int  ft_rev(int a)
{
    int res = 0;
    int n = 0;
    for (int i = 0; i < 3; i++)
    {
        n = a % 10;
        a = a / 10;
        res = res * 10 + n;
    }
    return (res);
}

int main()
{
    int a, b;
    scanf("%d %d", &a,&b);
    a = ft_rev(a);
    b = ft_rev(b);
    int max = (a >= b) ? a : b;
    printf("%d", max);
}