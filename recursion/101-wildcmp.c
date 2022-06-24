#include "main.h"
/**
 * _sub_compare - finding root
 * @a: to check
 * @b: to check
 * @control: to check
 * Return: Always function.
 */
int _sub_compare(char *a, char *b, char *control)
{
	if (*a == '\0' && *b == '\0')
		return (1);
	if (*a == '\0' && *b == '*')
		return (_sub_compare(a, b + 1, b + 1));
	if (*a == '\0' && *b != '\0')
		return (0);
	if (*b == '*')
		return (_sub_compare(a, b + 1, b + 1));
	if (*a == *b)
		return (_sub_compare(a + 1, b + 1, control));
	else
		return (_sub_compare(a + 1, control, control));
}

/**
 * wildcmp - function executor
 * @s1: to check
 * @s2: to check
 * Return: function
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (_sub_compare(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
