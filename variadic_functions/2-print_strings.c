#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function to print numbers
 * @n: The constant operator
 * @separator: The constant operator
 * Return: total
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list variadic_list;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(variadic_list, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(variadic_list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(variadic_list);
	}
	printf("\n");
}
