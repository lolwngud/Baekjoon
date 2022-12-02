#include <stdio.h>

int main()
{
    int X,N,a,b;
    int res=0;
    scanf("%d\n%d\n",&X,&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d\n",&a,&b);
        res+=(a*b);
    }
    if(X==res)
        printf("Yes");
    else
        printf("No");
}