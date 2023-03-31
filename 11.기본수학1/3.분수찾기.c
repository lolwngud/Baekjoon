#include <stdio.h>

int main() // dlwlsah210 코드에서 약간의 수정만 함
{
	int x, count = 0; // 몇번째 분수 나타내는 변수
	scanf("%d", &x);
	for (int i = 1; ; i++) // section 나누는 인덱스 i
	{
		int n = i;
		for (int j = 1; j <= i; j++)
		{
			count++;
			if (i % 2 == 1)
				if (count == x)
				{
					printf("%d/%d\n", n, j);
					return 0;
				}
			if (i % 2 == 0)
				if (count == x)
				{
					printf("%d/%d\n", j, n);
					return 0;
				}
			n--;
		}
	}
}