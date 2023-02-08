#include <stdio.h>

int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    if ((v - a) / (a - b) != (double)(v - a) / (a - b))
        printf("%d", 2 + (v - a) / (a - b));
    else
        printf("%d", 1 + (v - a) / (a - b));
}