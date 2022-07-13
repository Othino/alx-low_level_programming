#include "main.h"

/**
 * rot13 - Rotate characters 13 places in the alphabet.
 * @s: An input string to encode using rot13
 * Return: String `s` rotated
 */
char *rot13(char *s)
{
int i = 0;
char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char storel[] = "nopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
{
s[i] = (s[i] - 65 > 25) ?
storel[s[i] - 97] : storeh[s[i] - 65];
}
}

return (s);
}
