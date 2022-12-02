#include <stdio.h>

int main()
{
    int count, score, sum;

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        score = 0;
        sum = 0;
        char arr[81] = {0};
        scanf("%s", arr);
        for (int j = 0; j < 80; j++)
        {
            if (arr[j] == 'O')
                score++;
            else
                score = 0;
            sum = sum + score;            
        }
        printf("%d\n", sum);
    }
}
