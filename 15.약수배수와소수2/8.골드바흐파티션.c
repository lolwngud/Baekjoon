#include <stdio.h>

int main(void)
{
    int n = 1000000;
    int arr[1000001];
    for (int i = 0; i < 1000001; i++)
        arr[i] = i;
    for (int i = 2; i <= 1000000; i++)
    {
        for (int j = 2*i; j <= 1000000; j+=i)
            arr[j] = 0;
    }
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        int n,count=0;;
        scanf("%d",&n);
        for (int j = 2; j <= n/2; j++)
        {
            if(arr[j] && arr[n-j])
                count++;
        }
        printf("%d\n",count);
    }
}