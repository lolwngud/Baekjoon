#include <stdio.h>
#include <string.h>

int  main()
{
    char    str[101];

    scanf("%s", str);
    int a = 97;
    while (a <= 123)
    {
        int i = 0;
        while (i < strlen(str))
        {
            if (str[i] == (char)a)
                printf("%d ", i);
                break;
            i++;
        }
        if (i == strlen(str))
            printf("-1 ");
        a++;
    }
}