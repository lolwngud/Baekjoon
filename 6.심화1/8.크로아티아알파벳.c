#include <stdio.h>
#include <string.h>

static int ft_strstr(char *str, char *sep)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (!strncmp(&str[i], sep, strlen(sep)))
        {
            count++;
            i += strlen(sep) - 1;
        }
        i++;
    }
    return (count);
}

int main()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int word = ft_strstr(str, "c=") + ft_strstr(str, "c-") + ft_strstr(str, "dz=") + ft_strstr(str, "d-") \
            + ft_strstr(str, "lj") + ft_strstr(str, "nj") + ft_strstr(str, "s=") + ft_strstr(str, "z=");
    
    printf("%d", len - word);
}