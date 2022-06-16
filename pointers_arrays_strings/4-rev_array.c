#include "main.h"
/**
 * reverse_array - check the code
 * @a: to check
 * @n: to check
 * Return: len
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
