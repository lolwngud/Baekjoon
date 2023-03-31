#include <stdio.h>

double gradetonum(char *grade)
{
    double result = 0;
    if(grade[0] == 'A')
        result += 4;
    else if(grade[0] == 'B')
        result += 3;
    else if(grade[0] == 'C')
        result += 2;
    else if(grade[0] == 'D')
        result += 1;
    else if(grade[0] == 'F')
        result += 0;
    if (grade[1] == '+')
        result += 0.5;
    return(result);
}

int main()
{
    char sub[51],grade[3];
    double credit, num, sum=0, result=0, count = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s",sub,&credit,grade);
        if(grade[0]!='P')
        {
            num = gradetonum(grade);
            sum += credit * num;
            count += credit;
        }
    }
    result = sum / count;
    printf("%lf",result);
}