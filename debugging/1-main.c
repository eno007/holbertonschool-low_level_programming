#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	/* This loop will be infinite loop as i is not going to be incremented never*/
	{
		putchar(i);
		/* You can not use command putchar to print an intiger only if you add '0'*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
