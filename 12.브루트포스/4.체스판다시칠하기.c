#include <stdio.h>

int main()
{
    int m,n,mid_result,fin_result=2500;
    scanf("%d%d",&m,&n);
    char a[m][n],arr1[8][8]={0},arr2[8][8]={0};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if((i+j)%2==0)
                arr1[i][j]='B';
            else
                arr1[i][j]='W';
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if((i+j)%2==0)
                arr2[i][j]='W';
            else
                arr2[i][j]='B';
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf(" %c", &a[i][j]);
    }
    for (int c = 0; c <= m-8; c++)
    {
        for (int b = 0; b <= n-8; b++)
        {
            int count1=0,count2=0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (a[i+c][j+b] != arr1[i][j])
                        count1++;
                    if (a[i+c][j+b] != arr2[i][j])
                        count2++;
                }
                mid_result = count1 < count2 ? count1 : count2;
            }
            fin_result = mid_result < fin_result ? mid_result : fin_result;
        }
    }
    printf("%d",fin_result);
}