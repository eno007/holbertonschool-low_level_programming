#include "main.h"

/**
 * flip_bits- process that sets 0 at a specific index
 * @n: bit to replace
 * @m: replacer
 * Return: bit replaced
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;

	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
