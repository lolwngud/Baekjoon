#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    char arr[n][501],arr2[m][501];
    for (int i = 0; i < n; i++)
        scanf("%s",arr[i]);
    for (int i = 0; i < n; i++)
        printf("%s\n",arr[i]);

    for (int i = 0; i < m; i++)
        scanf("%s",arr2[m]);
    for (int i = 0; i < m; i++)
        printf("%s",arr2[m]);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(!strcmp(arr[j],arr2[i]))
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}