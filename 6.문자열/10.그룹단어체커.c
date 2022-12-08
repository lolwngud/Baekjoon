#include <stdio.h>
#include <string.h>

static int ft_check(char *str, char alpha)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (i == 0 && str[i] == alpha)
            count++;
        else if (i > 0 && str[i - 1] != alpha && str[i] == alpha)
            count++;
    }
    if (count == 1)
        return (1);
    else
        return (0);
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[101];
    int group;
    int word;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        char alpha = 'a';
        word = 0;
        group = 0;
        while (alpha <= 'z')
        {
            if (strchr(str, alpha))
                word++;
            alpha++;
        }
        while (alpha >= 'a')
        {
            if (ft_check(str, alpha))
                group++;
            alpha--;
        }
        if (word == group)
            count++;
    }
    printf("%d", count);
}