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
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
}
