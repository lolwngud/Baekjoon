#include <stdio.h>

int main()
{
    int count1, count2;
    double sum, res, count;
    int arr[1001] = {0};

    scanf("%d", &count1);
    for (int i = 0; i < count1; i++)
    {
        scanf("%d", &count2);
        sum = 0;
        res = 0;
        count = 0;
        for (int j = 0; j < count2; j++)
        {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        res = sum / count2;
        for (int k = 0; k < count2; k++)
        {
            if (arr[k] > res)
                count++;
        }
        printf("%.3f%%\n", count / count2 * 100);
    }
}
