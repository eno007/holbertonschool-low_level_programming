#include "main.h"

/**
 * get_bit - process that converts a number at a specific index
 * @n: number to be printed
 * @index: index given to be converted
 * Return: the value of the bit at index given or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int given_bit;
	unsigned int num_bits;

	num_bits = (sizeof(unsigned long int) * 8);

	if (index > num_bits)
		return (-1);
	given_bit = ((n >> index) & 1);
	return (given_bit);
}
