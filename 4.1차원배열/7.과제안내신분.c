#include <stdio.h>

int main()
{
    int arr[30];
    int index;
    for (int i = 0; i < 30; i++)
        arr[i]=0;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d",&index);
        arr[index-1]=1;
    }
    for (int i = 0; i < 30; i++)
    {
        if(arr[i]==0)
            printf("%d\n",i+1);
    }
}