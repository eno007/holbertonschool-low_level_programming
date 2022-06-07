#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -- entry point
 * prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int N;
	int M;
	int m;

	for (N = '0'; N <= '9'; N++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (m = N; m <= '9'; m++)
			{
				for (M = n + 1; M <= '9'; M++)
				{
					putchar(N);
					putchar(n);
					putchar(' ');
					putchar(m);
					putchar(M);

					if (!((N == '9' && n == '8') && (M == '9' && m == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				M = '0';
			}
		}
	}
	putchar('\n');
	return (1);
}
