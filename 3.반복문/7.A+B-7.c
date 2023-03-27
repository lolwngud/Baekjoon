#include <stdio.h>

int main()
{
    int T,a,b;
    scanf("%d\n", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d\n",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
}