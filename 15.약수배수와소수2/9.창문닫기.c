#include <stdio.h>

/*int main(void)
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 0; i < n+1; i++)
        arr[i] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j+=i)
            if(arr[j]==1)
                arr[j] = 0;
            else
                arr[j]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]==1)
            count++;
    }
    printf("%d",count);
}*/

int main(void)
{
    int n,count=1;
    scanf("%d",&n);
    for (int i = 2; i*i <= n; i++)
        count++;
    printf("%d",count);
}