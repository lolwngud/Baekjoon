#include <stdio.h>

int main()
{
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    int arr[n],brr[n];
    for (int a = 0; a < n; a++)
        arr[a] = a+1;
    for (int b = 0; b < m; b++)
    {
        for (int c = 0; c < n; c++)
            brr[c] = arr[c];
        scanf("%d%d%d",&i,&j,&k);
        int index = i-1,mid = k-1;
        while (mid<=j-1)
            arr[index++] = brr[mid++];
        while (i<k)
        {
            arr[index++] = brr[i-1];
            i++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}