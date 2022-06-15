#include "main.h"
/**
 * swap_int - check the code
 * @a: to check
 * @b: to check
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
