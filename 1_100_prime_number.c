//0408-1학년 과제

#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
	int i = 1, y, x, prime_num;

	for (x = 1; x <= 100; x++)
	{
		prime_num = 0;

		for (y = 1; y <= x; y++)
		{
			if (x % y == 0)
				prime_num++;
		}

		if (prime_num == 2)
		{
			printf(" %d", x);
			i++;
			if (i > 5)
			{
				printf("\n");
				i = 1;
			}
		}
	}

	return 0;
}
