#include "main.h"
#include <stdio.h>
/**
 * main - start
 * @i: 
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 != 0 && i % 3 != 0)
			printf("%i ", i);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			elske
				printf("Buzz");
		}
	}
	printf("\n");
	return(0);
}
