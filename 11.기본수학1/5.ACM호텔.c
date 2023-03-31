#include <stdio.h>

int main()
{
    int t, h, w, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count = 1;
        scanf("%d %d %d", &h, &w, &n);
        while(n > h)
        {
            count++;
            n -= h;
        }
        printf("%d\n", n * 100 + count);
    }
}