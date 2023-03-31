#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int a[N][M], b[N][M], c[N][M];
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
            scanf("%d",&a[i][j]);
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
            scanf("%d",&b[i][j]);
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}