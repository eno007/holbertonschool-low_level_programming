#include "main.h"
/**
 * _strstr - check the code
 * @haystack: to check
 * @needle: to check
 * Return: required output
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, m;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			m = i;
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[m] == needle[j])
				{
					m++;
					j++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
