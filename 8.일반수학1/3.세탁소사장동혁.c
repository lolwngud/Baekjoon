#include <stdio.h>

int main()
{
    int t,c;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&c);
        int q=0,d=0,n=0,p=0;
        while (c>=25)
        {
            c-=25;
            q++;
        }
        while (c>=10)
        {
            c-=10;
            d++;
        }
        while (c>=5)
        {
            c-=5;
            n++;
        }
        while (c>=1)
        {
            c-=1;
            p++;
        }
        printf("%d %d %d %d\n",q,d,n,p);
    }
}