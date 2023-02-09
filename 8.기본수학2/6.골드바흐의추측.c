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
    int T;
    scanf("%d",&T);
    for (size_t i = 0; i < T; i++)
    {
        int n, a, b;
        scanf("%d",&n);
        if (n == 4)
            printf("2 2\n");
        
        else
        {
            for (size_t i = 3; i <= n/2; i++)
            {
                if(ft_prime(i) && ft_prime(n-i))
                {
                        a = i;
                        b = n - i;
                }
            }
            printf("%d %d\n",a,b);
        }
    }
}