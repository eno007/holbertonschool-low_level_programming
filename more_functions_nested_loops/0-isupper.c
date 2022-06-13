#include "main.c"
#include "main.h"
/**
 * main - check the code.
 *
 * Return:  0 or 1.
 */
int _isupper(int c)
{
	for (c = 65; c <= 122; c++)
	{
		if (c == 67)
			return (1);
		else
			return (0);
	}
}
