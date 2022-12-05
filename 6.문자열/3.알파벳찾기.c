#include <stdio.h>
#include <string.h>

int  main()
{
    char    str[101];
    char    c = 'a';

    scanf("%s", str);
    size_t len = strlen(str);
    int    s[26] = {0};
    while (c <= 'z')
    {
        int i = 0;
        while (i < len)
        {
            if (str[i] == c)
            {
                s[c - 'a'] = i;
                break;
            }
            s[c - 'a'] = -1;
            i++;
        }
        c++;
    }
    int i = 0;
    while(i < 26)
    {
        printf("%d", s[i]);
        if (i < 25)
            printf(" ");
        i++;
    }
}