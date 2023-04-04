#include <stdio.h>

int main()
{
    int n;
    while(1)
    {
        int k = 0, sum=0,arr[100000]={0};
        scanf("%d",&n);
        if(n==-1)
            break;
        for (int i = 1; i < n; i++)
        {
            if(n%i==0)
            {
                sum+=i;
                arr[k++] = i;
            }
        }
        if(sum == n)
        {
            printf("%d =",n);
            for (int j = 0; arr[j]!=0; j++)
            {
                printf(" %d",arr[j]);
                if(arr[j+1]!=0)
                    printf(" +");
            }
            printf("\n");
        }
        else
            printf("%d is NOT perfect.\n",n);
    }
}