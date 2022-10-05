#include "main.h"

/**
 * _isdigit - checks if parameter is a number 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), else 0
 */

int _isdigit(int c)
{
char i = '0';
int isdigit = 0;

for (; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
break;
}
}
return (isdigit);
}
