#include <stdio.h>

int ft_gcd(int a,int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return (a);
}

int main(void)
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],arr2[n-1];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < n-1; i++)
        arr2[i]=arr[i+1]-arr[i];
    int gcd = arr2[0];
    for (int i = 0; i < n-2; i++)
    {
        gcd=ft_gcd(gcd,arr2[i+1]);
    }
    for (int i = 0; i < n-1; i++)
    {
        while(arr[i]<arr[i+1])
        {
            arr[i] += gcd;
            count++;
        }
        count--;
    }
    printf("%d",count);
}