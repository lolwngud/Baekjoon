#include <stdio.h>

static int  ft_size(int n)
{
    int size = 0;

    while(n > 0)
    {
        n /= 10;
        size++;
    }
    return (size);
}

static int  check(int n)
{
    int size;
    int i;

    size = ft_size(n);
    int arr[size];
    int arr2[size - 1];
    i = 0;
    while (i < size)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    i = 0;
    while (i < size - 1)
    {
        arr2[i] = arr[i] - arr[i + 1];
        i++;
    }
    i = 0;
    while (i < size - 2)
    {
        if (arr2[i] != arr2[i + 1])
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    int n;
    int i;
    int count;
    
    scanf("%d", &n);
    i = 1;
    count = 0;
    while (i <= n)
    {
        if(check(i))
            count++;
        i++;
    }
    printf("%d", count);
}
