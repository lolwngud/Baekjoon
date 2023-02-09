#include <stdio.h>

int main()
{
    int M, N, min, sum = 0;
    scanf("%d %d", &N, &M);
    while(N<=M)
    {
        int i = 2;
        while(i < N)
        {
            if(N % i == 0)
                break;
            i++;
        }
        if(!sum)
            min = N;
        if(i == N)
            sum += N;
        N++;
    }
    if (sum)
        printf("%d\n%d", sum, min);
    else
        printf("-1");
}
