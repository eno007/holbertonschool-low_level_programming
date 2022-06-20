#include "main.h"
/**
 * _pow_recursion - function
 * @x: to check
 * @y: to check
 * Return: Always function.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
		return (0);
	if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
