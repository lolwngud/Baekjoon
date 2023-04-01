#include <stdio.h>
#include <string.h>

int basematch(char n, char *base)
{
    int i=0;
    while(base[i])
    {
        if(n == base[i])
            return (i);
        i++;
    }
    return(-1);
}

int main()
{
    int b, result=0, count=1;
    char n[32]={0}, base[36];
    for (int i = 0; i < 36; i++)
    {
        if(i<10)
            base[i] = i+48;
        else
            base[i] = i+55;
    }
    scanf("%s%d",n,&b);
    for (int i = strlen(n)-1; i >= 0; i--)
    {
        result += basematch(n[i],base) * count;
        count *= b;
    }
    printf("%d",result);
}