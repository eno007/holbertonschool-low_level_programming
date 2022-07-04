#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adding and giving a sum
 * @n: The operator
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list variadic_list;
	unsigned int tot, i;
	tot = 0;

	if (n == 0)
		return (0);
	va_start(variadic_list, n);
	for (i = 0; i < n; i++)
		tot += va_arg(variadic_list, int);
	va_end(variadic_list);
	return(tot);
}
