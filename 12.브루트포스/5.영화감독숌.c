#include <stdio.h>

int nbrlen(int n)
{
    int len=0;
    while (n>0)
    {
        n/=10;
        len++;
    }
    return(len);
}

int check666(int n)
{
    int count = 0,len = nbrlen(n);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = n%10;
        n /= 10;
    }
    for (int j = 0; j < len; j++)
    {
        if(arr[j] == 6)
            count++;
        else
            count = 0;
        if(count==3)
            break;
    }
    if(count == 3)
        return(0);
    else
        return(1);
}

int main()
{
    int n,count=0;
    scanf("%d",&n);
    for (int i = 666; count <= n; i++)
    {
        if(!check666(i))
            count++;
        if(count==n)
        {
            printf("%d",i);
            break;
        }
    }
}