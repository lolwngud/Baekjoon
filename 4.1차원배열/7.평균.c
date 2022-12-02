#include <stdio.h>

int main()
{
    int count,max;
    double sum=0;
    scanf("%d",&count);
    int arr[count];
    scanf("%d",&arr[0]);
    max=arr[0];
    for (int i = 1; i < count; i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
            max=arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        sum=sum+(double)arr[i]/(double)max*100;
    }
    printf("%f",sum/(double)count);
}