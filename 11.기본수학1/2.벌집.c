#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int nb = 1, floor = 1;;
    while (1)
    {
        if (n - nb <= 0)
            break;
        nb += floor * 6;
        floor++;
    }
    printf("%d", floor);
}