#include <stdio.h>

int ft_prime(long N)
{
    long i;

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

int main(void)
{
    long t,n;
    scanf("%ld",&t);
    for (long i = 0; i < t; i++)
    {
        scanf("%ld",&n);
        while(1)
        {
            if(ft_prime(n))
                break;
            n++;
        }
        printf("%ld\n",n);
    }
}