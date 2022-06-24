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

int _compare_head_tail(char *s, int i, int a, int b)
{
	i = _find_length(s);

        for (a = i / 2; a >= 0; a--)
        {
                for (b = (i / 2) + 1; b < '\0'; b++)
                {
                        if (s[a] != s[b] && ((s[0] || s[1]) != '\0'))
				return (0);
                }
        }
	return (_compare_head_tail(s, i));
}

/**
 * is_prime_number - function executor
 * @n: to check
 * Return: function
 */
int is_palindrome(char *s)
{
	return (_compare_head_tail(s, a, b, is_palindrome(s)));
}
