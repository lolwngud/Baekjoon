#include <stdio.h>

int main()
{
    int N;
    int a,b;
    int count=1;
    scanf("%d",&N);
    a=(N/10)+(N%10);
    b=(N%10)*10+(a%10);
    while(N!=b)
    {
        a=(b/10)+(b%10);
        b=(b%10)*10+(a%10);
        count++;
    }
    printf("%d",count);
}