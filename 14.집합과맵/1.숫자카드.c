#include <stdio.h>
#include <stdlib.h>

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

int binsearch(int *data, int n, int key)
{
    int low, high;
    int mid;
 
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == data[mid])  //탐색 성공
            return mid;        
        else if (key < data[mid]) //탐색 범위를 아래쪽으로
            high = mid - 1;
        else if (key > data[mid]) //탐색 범위를 위쪽으로
            low = mid + 1;
    }
    return -1;                 //탐색 실패
}

int main(void)
{
    int n,m,key;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    ft_quicksort(arr,0,n-1);
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&key);
        if(binsearch(arr,n,key) != -1)
            printf("1 ");
        else
            printf("0 ");
    }
}