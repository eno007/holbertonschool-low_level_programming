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

	for (N = '0'; N <= '9'; N++)
	{
		for (n = (N + 1); n <= '9'; n++)
		{
			putchar(N);
			putchar(n);

			if (N != '8' || n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
