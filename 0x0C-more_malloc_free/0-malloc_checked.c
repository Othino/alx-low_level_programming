#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: malloc function parameter
 * Return: A pointer on 1 returns 98 on exit
 */

void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(sizeof(char) * b);
if (s == NULL)
{
exit(98);
}

return (s);
}
