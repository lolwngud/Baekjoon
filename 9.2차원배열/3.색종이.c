#include <stdio.h>

int main()
{
    int count = 0, n, a[100][100] = {0};
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        for (size_t j = x; j < x+10; j++)
        {
            for (size_t k = y; k < y+10; k++)
            {
                if(a[j][k]==0)
                    a[j][k] = 1;
            }
        }
    }
    for (size_t i = 0; i < 100; i++)
    {
        for (size_t j = 0; j < 100; j++)
        {
            if(a[i][j]==1)
                count++;
        }
    }
    printf("%d",count);
}