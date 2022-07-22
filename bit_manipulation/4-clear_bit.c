#include "main.h"

/**
 * clear_bit - process that sets 0 at a specific index
 * @n: number to be printed
 * @index: index given to be converted
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp = 1;
	unsigned int num_bits;

	num_bits = (sizeof(unsigned long int) * 8);

	if (index > num_bits)
		return (-1);
	tmp = ~(tmp << index);
	*n = (*n & tmp);
	return (1);
}
