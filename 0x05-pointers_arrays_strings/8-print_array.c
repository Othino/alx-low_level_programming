#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integer.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
