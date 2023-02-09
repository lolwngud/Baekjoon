#include <stdio.h>

int main()
{
    int N, a, count = 0;
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &a);
        if(a != 1)
        {
            int j = 2;
            while (j < a)
            {
                if (a % j == 0)
                    break;
                j++;
            }
            if(j == a)
                count++;
        }
    }
    printf("%d", count);
}
