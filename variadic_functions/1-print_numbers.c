#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * @n: The operator
 * @separator: The operator
 * Return: total
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list variadic_list;
	unsigned int i;

	if (n > 0)
	{
		va_start(variadic_list, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(variadic_list, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(variadic_list);
	}
	printf("\n");
}
