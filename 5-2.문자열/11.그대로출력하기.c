#include <stdio.h>

int main()
{
    char str[100];
    while (1)
    {
        if(!scanf("%[^\n]",str))
            break;
        printf("%s\n",str);
    }
}