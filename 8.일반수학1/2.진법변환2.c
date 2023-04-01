#include <stdio.h>

int main()
{
    int num, b, count2 = 0, index=0;
    long long count=1;
    char n[32]={0}, base[36];
    for (int i = 0; i < 36; i++)
    {
        if(i<10)
            base[i] = i+48;
        else
            base[i] = i+55;
    }
    scanf("%d%d",&num,&b);
    while(count<=num)
    {
        count *= b;
        count2++;
    }
    count /= b;
    for(int i=0; i<count2; i++)
    {
        n[index++] = base[num/count];
        num-=count * (num/count);
        count/=b;
    }
    printf("%s",n);
}