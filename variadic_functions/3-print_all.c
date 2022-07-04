#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function to print as per user input
 * @format: The constant operator
 * Return: total
 */
void print_all(const char * const format, ...)
{
	va_list variadic_list;
	int n = 0; 
	int i = 0;
	char *str;
	char *sep = ", ";

	va_start(variadic_list, format);
	
	while (format && format[i])
	{
		i++;
		switch (format[n])
		{
		case 'c': 
			printf("%c%s", va_arg(variadic_list, int), sep);
			if (n == (i - 1))
				sep = "";
			break;
		case 'i':
			printf("%d%s", va_arg(variadic_list, int), sep);
			if (n == (i - 1))
				sep = "";
			break;
		case 's':
			str = va_arg(variadic_list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			if (n == (i - 1))
				sep = "";
			break;
		case 'f':
			printf("%f%s", va_arg(variadic_list, double), sep);
			if (n == (i - 1))
				sep = "";
			break;
		}
		n++;
	}
	printf("\n");
	va_end(variadic_list);
}
