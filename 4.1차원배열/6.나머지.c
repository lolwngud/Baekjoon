#include <stdio.h>

int main()
{
    int n;
    int count=0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int check=0;
        scanf("%d",&n);
        arr[i]=n%42;
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j])
                break;
            check++;
        }
        if(check==i)
            count++;
    }
    printf("%d",count);
}