#include <stdio.h>

int main()
{
    int x,y,w,h,min1,min2,dis;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    min1 = x<w-x ? x : w-x;
    min2 = y<h-y ? y : h-y;
    dis = min1<=min2 ? min1 : min2;
    printf("%d",dis);
}