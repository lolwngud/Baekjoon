#include <stdio.h>

int main()
{
    int n, line=2, mul=1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        line += mul;
        mul *= 2;
    }
    printf("%d",line*line);
}