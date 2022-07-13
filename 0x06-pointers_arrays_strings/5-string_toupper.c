#include "main.h"

/**
 * cap_string - Changes all lowercase letters to uppercase.
 * @c: String
 * Return: pointer to c
 */
char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{

if (c[i] > 96 && c[i] < 123)
{
c[i] -= 32;
}
}

return (c)
}
