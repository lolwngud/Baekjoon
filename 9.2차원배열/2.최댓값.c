#include <stdio.h>

int main()
{
    int max = -1, max_i = 0, max_j = 0, a[9][9];
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
            scanf("%d", &a[i][j]);
    }
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                max_i = i + 1;
                max_j = j + 1;
            }
        }
    }
    printf("%d\n%d %d",max,max_i,max_j);
}