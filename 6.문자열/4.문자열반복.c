#include <stdio.h>

int main()
{
    int t, r;
    char    s[21] = {0};
    scanf("%d\n", &t);
    int i = 0;
    while (i < t)
    {
        scanf("%d", &r);
        scanf("%s", s);
        int j = 0;
        while (s[j] != 0)
        {
            for (size_t i = 0; i < r; i++)
                printf("%c", s[j]);
            j++;
        }
        printf("\n");
        i++;
    }
}