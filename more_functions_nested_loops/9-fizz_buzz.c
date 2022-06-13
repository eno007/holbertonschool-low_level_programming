#include "main.h"
#include <stdio.h>

/**
 * print_square - check the code.
 * @size: to check
 * Return:  0 or 1.
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 != 0 && i % 3 != 0)
			printf("%i ", i);
		if (i % 15 == 0)
			printf("FizzBuzz ");
		if (i % 3 == 0)
			printf("Fizz ");
		if (i % 5 == 0)
			printf("Buzz ");
		
	}
	return(0);
}
