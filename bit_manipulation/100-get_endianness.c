#include "main.h"

/**
 * get_endianness - process that sets 0 at a specific index
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	return (*(char *)(&n) == 1);
}
