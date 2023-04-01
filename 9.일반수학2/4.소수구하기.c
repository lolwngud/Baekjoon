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
    int M, N;
    scanf("%d %d", &N, &M);
    while(N<=M)
    {
        if (ft_prime(N))
            printf("%d\n",N);
        N++;
    }
}