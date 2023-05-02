#include <stdio.h>

int ft_prime(int N)
{
    int	i;

	if (N <= 1)
		return (0);
	else if (N == 2)
		return (1);
	i = 2;
	while (i <= N / i)
	{
		if (N % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        int count = 0;
        for (size_t i = n + 1; i <= 2*n; i++)
        {
            if(ft_prime(i))
                count++;
        }
        printf("%d\n",count);
    }
}