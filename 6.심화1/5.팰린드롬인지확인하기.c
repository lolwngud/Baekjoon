#include <stdio.h>
#include <string.h>

int main()
{
    char word1[101],word2[101];
    scanf("%s",word1);
    int length = strlen(word1)-1,index = 0;
    for (int i = 0; i < strlen(word1); i++)
        word2[i] = word1[length--];
    while (index < strlen(word1))
    {
        if(word1[index] != word2[index])
            break;
        index++;
    }
    if (index == strlen(word1))
        printf("1");
    else
        printf("0");
}