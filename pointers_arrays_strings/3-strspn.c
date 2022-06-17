#include "main.h"
/**
 * _strspn - check the code
 * @s: to check
 * @accept: to check
 * Return: required output
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (num);
		}
	}
	return (num);
}
