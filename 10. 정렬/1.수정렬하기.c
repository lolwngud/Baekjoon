#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (size_t i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for (size_t i = 0; i < n - 1; i++)
    {
        int min = 1001, j = i, temp;
        while (j < n)
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
    for (size_t i = 0; i < n; i++)
        printf("%d\n",a[i]);
}