#include <stdio.h>

int ft_prime(int N)
{
    int	i;

	if (N <= 1)
		return (0);
	else if (N == 2)
		return (1);
	i = 2;
	while (i < N)
	{
		if (N % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    int N;
    scanf("%d", &N);
    if (N == 1)
        return (0);
    if (ft_prime(N))
    {
        printf("%d", N);
        return (0);
    }
    else
    {
        while (!ft_prime(N))
        {
            for (int i = 2; i < N; i++)
            {
                if(N % i == 0)
                {
                    printf("%d\n", i);
                    N /= i;
                    break;
                }
            }
        }
        printf("%d\n", N);
    }
}
