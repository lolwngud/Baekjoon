#include <stdio.h>

int main()
{
    int a[5], avg, sum = 0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = sum / 5;
    for (size_t i = 0; i < 4; i++)
    {
        int min = 100, j = i, temp;
        while (j < 5)
        {
            if (a[j]<min)
            {
                min = a[j];
                temp = j;
            }
            j++;
        }
        a[temp] = a[i];
        a[i] = min;
    }
    printf("%d\n%d",avg,a[2]);
}