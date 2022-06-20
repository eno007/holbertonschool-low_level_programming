#include "main.h"
/**
 * factorial - function
 * @n: to check
 * Return: Always function.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
