#include <stdio.h>

int main()
{
    int t, k, n;
    scanf("%d", &t);
    for (int u = 0; u < t; u++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        int arr[15][14] = {0};
        for (int i = 0; i <= 14; i++)
            arr[i][0] = 1;
        for (int i = 1; i < 14; i++)
            arr[0][i] = i + 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
        printf("%d\n", arr[k][n - 1]);
    }
}
/*
#include <stdio.h>

int main() {
    int K = 0, N = 0, turn = 0, cnt = 0;
    int num[15][14] = { 0, };

    for (int l = 0; l < 14; l++) {
        num[0][l] = l + 1;
    }

    for (int u = 0; u < 15; u++) {
        num[u][0] = 1;
    }
    scanf("%d", &turn);
    scanf("%d", &K);
    scanf("%d", &N);

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            num[i][j] = num[i - 1][j] + num[i][j - 1];
        }
    }


    while (cnt < turn) {

        printf("%d\n", num[K][N - 1]);
        cnt++;
    }


}*/