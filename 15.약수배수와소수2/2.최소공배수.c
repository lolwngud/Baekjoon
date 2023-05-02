#include <stdio.h>

int ft_gcd(long long int a,long long int b)
{
    long long int r;
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
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int gcd = ft_gcd(a,b);
    printf("%lld\n",(a*b)/gcd);
}