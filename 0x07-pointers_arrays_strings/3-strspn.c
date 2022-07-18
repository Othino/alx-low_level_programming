#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: Pointer to c position
 */
unsigned int _strspn(cahr *s, char *accept)
{
unsigned int a = 0, b, t = 0;

while (accept[a])
{
b = 0;

while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}
a++;
}

return (t);
}
