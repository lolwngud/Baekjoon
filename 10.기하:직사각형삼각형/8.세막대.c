#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;
    if(a+b+c-max>max)
        printf("%d",a+b+c);
    else
        printf("%d",(a+b+c-max)*2-1);
}