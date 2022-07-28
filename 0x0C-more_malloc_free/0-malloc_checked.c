#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: malloc function parameter
 * Return: A pointer on 1 returns 98 on exit
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
