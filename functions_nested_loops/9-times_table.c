#include "main.h"

/**
 * times_table -- entry point
 * Return: 0
 */
void times_table(void)
{
	int v1, v2, p;

	for (v1 = 0; v1 <= 9; v1++)
	{
		for (v2 = 0; v2 <= 9; v2++)
		{
			p = (v1 * v2);
			if (v2 == 0)
			{
				_putchar(p + '0');
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
