#include <stdio.h>

void triangle(int x,int y,int z,int max)
{
    if(x+y+z-max>max&&x==y&&x==z)
        printf("Equilateral\n");
    else if(x+y+z-max>max&&x==y||x==z||y==z)
        printf("Isosceles\n");
    else if(x+y+z-max<=max)
        printf("Invalid\n");
    else
        printf("Scalene\n");
}

int main()
{
    int x,y,z;
    while(1)
    {
        scanf("%d%d%d",&x,&y,&z);
        int max = x;
        max = y > max ? y : max;
        max = z > max ? z : max;
        if(x==0&&y==0&&z==0)
            break;
        else
            triangle(x,y,z,max);
    }
}