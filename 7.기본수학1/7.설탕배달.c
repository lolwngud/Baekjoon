#include <stdio.h>

int main()
{
    int n, small = 0, large = 0;
    scanf("%d", &n);
    if (n < 5 && (n%5 != 0 && n%3 != 0))
    {
        printf("-1");
        return (0);
    }
    while(n >= 5)
    {
        if (n-5>=5 || n-5==3 || n-5 == 0)
        {
            n -= 5;
            large++;
        }
        else
            break;
    }
    while(n >= 3)
    {
        if (n-3 % 3 == 0)
        {
            n -= 3;
            small++;
        }
    }
    if (n == 0)
    {
        printf("%d %d %d\n", large, small, large + small);
        return (0);
    }
    printf("-1");
}