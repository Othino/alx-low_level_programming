#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if it fails.
 */
void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(b);

if (s == NULL)
exit(98);

return (s);
}
