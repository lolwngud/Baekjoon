#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        int sum=i;
        for (int j = i; j > 0; j/=10)
            sum+=(j%10);
        if(sum==n)
        {
            printf("%d",i);
            return(0);
        }
    }
    printf("0");
}