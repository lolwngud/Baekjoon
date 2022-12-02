#include <stdio.h>

int main()
{
    int arr[9];
    scanf("%d\n",&arr[0]);
    int max=arr[0];
    int index=0;
    for (int i = 1; i < 9; i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
            index=i;
        }
    }
    printf("%d\n%d",max,index+1);
}