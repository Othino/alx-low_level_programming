#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Input character
 * Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
  if (c > 96 && c < 123)
    return (1);
  else
    return (0);
}
