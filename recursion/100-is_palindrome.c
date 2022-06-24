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
/**
 * _compare - finding root
 * @a: to check
 * @b: to check
 * Return: Always function.
 */
int _compare(char *a, char *b)
{
	if (a >= b)
		return (1);
	if (*a == *b)
		return (_compare(a + 1, b - 1));
	return (0);
}

/**
 * is_palindrome - function executor
 * @s: to check
 * Return: function
 */
int is_palindrome(char *s)
{
	int length = _find_length(s);

	return (_compare(s, (s + length - 1)));
}
