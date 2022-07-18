#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: Pointer to c position
 */
unsigned int _strspn(cahr *s, char *accept)
{
int i, j, f, flag;
f = 0;
for (i = 0; s[i] != '\0'; i++)
{
flag = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
f++;
flag = 1;
}
}
if (flag == 0)
{
return (f);
}
}

return (0);
}
