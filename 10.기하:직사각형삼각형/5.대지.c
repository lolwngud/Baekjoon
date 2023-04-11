#include <stdio.h>

int main()
{
    int n,a,b,x_max=-10001,x_min=10001,y_max=-10001,y_min=10001;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        x_max = a >= x_max ? a : x_max;
        x_min = a <= x_min ? a : x_min;
        y_max = b >= y_max ? b : y_max;
        y_min = b <= y_min ? b : y_min;
    }
    printf("%d",(x_max-x_min)*(y_max-y_min));
}