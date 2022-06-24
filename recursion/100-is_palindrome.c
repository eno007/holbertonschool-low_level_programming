#include "main.h"
/**
 * _find_length - finding root
 * @s: to check
 * Return: Always function.
 */
int _find_length(char *s)
{
        if (*s == '\0')
                return (0);
        s++;
        return (1 + (_find_length(s)));
}

int _compare(char *a, char *b)
{
	if (a >= b)
		return (1);
	if (*a == *b)
		return (_compare(a + 1, b - 1));
	return (0);
}

/**
 * is_prime_number - function executor
 * @n: to check
 * Return: function
 */
int is_palindrome(char *s)
{
	int length = _find_length(s);

	return (_compare(s, (s + length - 1)));
}
