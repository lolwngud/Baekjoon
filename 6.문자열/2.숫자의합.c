#include <stdio.h>

int main()
{
    int n;
    int res = 0;
    scanf("%d\n", &n);
    char str[n];
    for (int i = 0; i < n; i++)
        scanf("%c", &str[i]);
    for (int i = 0; i < n; i++)
        res += str[i] - 48;
    printf("%d\n", res);
}