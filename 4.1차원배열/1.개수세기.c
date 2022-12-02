#include <stdio.h>

int main()
{
    int N,v;
    int count=0;
    scanf("%d\n",&N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("\n%d",&v);
    for (int i = 0; i < N; i++)
    {
        if(arr[i]==v)
            count++;
    }
    printf("%d",count);
}