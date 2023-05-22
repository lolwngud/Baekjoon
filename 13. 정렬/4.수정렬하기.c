#include <stdio.h>

void ft_quicksort(int *data, int start, int end)
{
    int pivot = start, i = start + 1, j = end, temp;
    if(start >= end)
        return;
    while (i <= j) // 엇갈릴떄까지 반복
    {
        while (data[i] < data[pivot]) // pivot값보다 큰 값을 찾는 것
            i++;
        while (data[j] > data[pivot] && j > start) // pivot값보다 작은 값을 찾는 것
            j--;
        if(i > j)
        {
            temp = data[pivot];
            data[pivot] = data[j];
            data[j] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    ft_quicksort(data, start, j - 1);
    ft_quicksort(data, j + 1, end);
}

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    for (size_t i = 0; i < n; i++)
        scanf("%d",&data[i]);
    ft_quicksort(data, 0, n - 1);
    for (size_t i = 0; i < n; i++)
        printf("%d\n", data[i]);
}