#include <stdio.h>

int main()
{
	int N;
	int min = 2668;
	scanf("%d", &N);
	for (int i = 0; i < 1667; i++)
	{
		for (int j = 0; j < 1001; j++)
		{
			if ((i * 3) + (5 * j) == N)
			{
				if (min > i + j)
					min = i + j;
			}
		}
	}
	if (min !=2668 )
		printf("%d", min);
	else if(min==2668)
		printf("-1");
}