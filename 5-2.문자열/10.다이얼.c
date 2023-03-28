#include <stdio.h>

int main()
{
    char s[16];
    int sec = 0;
    
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
    {
        if (s[i]>='A' && s[i]<='C')
            sec += 3;
        else if (s[i]>='D' && s[i]<='F')
            sec += 4;
        else if (s[i]>='G' && s[i]<='I')
            sec += 5;
        else if (s[i]>='J' && s[i]<='L')
            sec += 6;
        else if (s[i]>='M' && s[i]<='O')
            sec += 7;
        else if (s[i]>='P' && s[i]<='S')
            sec += 8;
        else if (s[i]>='T' && s[i]<='V')
            sec += 9;
        else if (s[i]>='W' && s[i]<='Z')
            sec += 10;
    }
    printf("%d", sec);
}