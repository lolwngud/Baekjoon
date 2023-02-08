#include <stdio.h>

int main()
{
    int t, k, n;
    scanf("%d", &t);
    for (int u = 0; u < t; u++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        int arr[k + 1][n];
        for (int i = 0; i <= k; i++)
            arr[i][0] = 1;
        for (int i = 1; i < n; i++)
            arr[0][i] = i + 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j < n; j++)
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
        printf("%d\n", arr[k][n - 1]);
    }
}