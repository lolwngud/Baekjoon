#include <stdio.h>

static void ft_upper(char *s)
{
    int i = 0;
    
    while(s[i])
    {
        if(s[i] >= 97 && s[i] <= 123)
            s[i] -= 32;
        i++;
    }
}

int main()
{
    int alpha[26] = {0};
    char    s[1000000];

    scanf("%s", s);
    ft_upper(s);
    for (int i = 0; s[i]; i++)
    {
        alpha[s[i] - 65]++;
    }
    int max = alpha[0];
    int max_index = 0;
    int flag = 0;
    for (int i = 1; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_index = i;
            flag = 0;
        }
        else if (alpha[i] == max)
            flag = 1;
    }
    if (flag == 0)
        printf("%c", max_index + 'A');
    else
        printf("?");
}