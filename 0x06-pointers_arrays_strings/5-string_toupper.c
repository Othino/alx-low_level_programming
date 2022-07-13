#include "main.h"

/**
 * cap_string - Changes all lowercase letters to uppercase.
 * @s: String
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
int count = 0;

while (*(s + count) != '\0')
{

if ((*(s + count) >= 97) && (*(s + count) <= 122))
*(s + count) = *(s + count) - 32;
count++;
{

return (s)
}
