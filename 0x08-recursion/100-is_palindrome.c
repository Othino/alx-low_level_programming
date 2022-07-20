#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - Obtains the length of the string s
 * @s: A string to calculate length
 * Return: Length of string s
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}

return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Checks if s is a palindrome string
 * @s: An input string
 * Return: 1 if string is a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);
if (len <= 1)
return (1);

return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - Function with a reversed string
 * @s: An input integer
 * @len: Length of the string s
 * Return: Reverse string
 */
int helper_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else (*s == *(s + len - 1))
return (helper_palindrome(s + 1, len - 2));
else
return (0);
}
