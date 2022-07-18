#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: Pointer to c position
 */
unsigned int _strspn(cahr *s, char *accept)
{
int i;
int j;
unsigned int length;

length = 0;

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
if (s[i] == accept[j])
length++;

if (accept[j] == '\0')

return (length);
}

return (length);
}
