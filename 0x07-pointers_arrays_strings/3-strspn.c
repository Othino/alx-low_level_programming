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
int c;

i = 0;
c = 0;

while (s[i] != '\0')
{
j = 0;

while (accept[j] != '\0')
{

if (s[i] == accept[j])
{
c++;

break;
}
j++;
}

if (accept[j] == '\0')

break;
i++;
}

return (c);
}
