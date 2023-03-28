#include <stdio.h>

int main()
{
    char str[1000001];
    int word = 0;

    scanf("%[^\n]s", str); //공백을 포함한 문자열을 scanf로 받고싶을 떄 사용 ([^\n]):개행이 오기 전까지 입력받는다는 의미
    int i = 0;
    while (str[i])
    {
        while (str[i] == 32)
            i++;
        if (str[i])
            word++;
        while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            i++;
    }
    printf("%d", word);
}