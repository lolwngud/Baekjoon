#include <stdio.h>

static int	self_check(int n)
{
	int	i;
	int nb;
	int	res;
	int count;

	i = 1;
	nb = n;
	count = 0;
	while (i < n)
	{
		res = i;
		while(i > 0)
		{
			res += i % 10;
			i /= 10;
		}
		count++;
		i = count;
		if (res == n)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	int	n;

	n = 1;
	while (n <= 10000)
	{
		if (self_check(n) == 1)
			printf("%d\n", n);
		n++;
	}
}