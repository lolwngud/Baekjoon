#include <stdio.h>

int main()
{
    int a, b, c;
    int count = 0;
    scanf("%d %d %d", &a,&b,&c);
    if (c - b <= 0)
    {
        printf("-1");
        return (0);
    }
    printf("%d", (a/(c-b)+1));
}