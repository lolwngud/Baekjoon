#include <stdio.h>

int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = 0;
    for (int a = 0; a < m; a++)
    {
        scanf("%d%d%d",&i,&j,&k);
        for (int b = i-1; b <= j-1; b++)
            arr[b] = k;
    }
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}
