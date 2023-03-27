#include <stdio.h>

int main()
{
    int n,m,i,j,temp;
    scanf("%d%d",&n,&m);
    int arr[n];
    for (int a = 0; a < n; a++)
        arr[a] = a+1;
    for (int b = 0; b < m; b++)
    {
        scanf("%d%d",&i,&j);
        for (int c = 0; c < (j-i+1)/2; c++)
        {
            temp = arr[i-1+c];
            arr[i-1+c] = arr[j-1-c];
            arr[j-1-c] = temp;
        }
    }
    for (int d = 0; d < n; d++)
        printf("%d ",arr[d]);
}