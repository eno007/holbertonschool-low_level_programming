#include <stdio.h>
/**
 * main -- entry point
 * Return: 0
 */
int main(void)
{
	long f1 = 1;
	long f2 = 2;
	int num;
	int limit = 50;

	for (num = 1; num <= (limit / 2); num++)
	{
		printf("%li, %li", f1, f2);
		f1 += f2;
		f2 += f1;
	}
	if (limit % 2 == 1)
		printf("%li, ", f1);
	printf("\n");

	return (0);
}
