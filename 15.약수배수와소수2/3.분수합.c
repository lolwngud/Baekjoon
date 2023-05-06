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
    int a1,a2,b1,b2;
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    int gcd = ft_gcd(((a1*b2)+(a2*b1)),(a2*b2));
    printf("%d %d",((a1*b2)+(a2*b1))/gcd,(a2*b2)/gcd);
}