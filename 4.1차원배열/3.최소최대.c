#include <stdio.h>

int main()
{
    int count,max,min;
    scanf("%d\n",&count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d ",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (int i = 1; i < count; i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d %d",min,max);
}