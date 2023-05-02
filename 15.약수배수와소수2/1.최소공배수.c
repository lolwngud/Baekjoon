#include <stdio.h>

int ft_gcd(int a,int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return (a);
}

int main(void)
{
    int t,a,b;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d",&a,&b);
        int gcd = ft_gcd(a,b);
        printf("%d\n",(a*b)/gcd);
    }
}