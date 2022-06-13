#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * 
 * Return:  0 
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
			printf("Buzz ");	
	}
	printf("\n");
	return(0);
}
