#include <stdio.h>

int main()
{
    int arr[6]={0},x,y;
    for(int i = 0;i<6;i++)
        scanf("%d",&arr[i]);
    if(arr[0]!=arr[2]&&arr[0]!=arr[4])
        x=arr[0];
    else if(arr[2]!=arr[0]&&arr[2]!=arr[4])
        x=arr[2];
    else
        x=arr[4];
    if(arr[1]!=arr[3]&&arr[1]!=arr[5])
        y=arr[1];
    else if(arr[3]!=arr[1]&&arr[3]!=arr[5])
        y=arr[3];
    else
        y=arr[5];
    printf("%d %d",x,y);
}