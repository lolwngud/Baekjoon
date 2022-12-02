#include <stdio.h>

int main()
{
    int N,X;
    scanf("%d %d\n",&N,&X);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if(arr[i]<X)
            printf("%d ",arr[i]);
    }
}
