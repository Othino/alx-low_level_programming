#include <main.h>

/**
 * main - Print "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char _putchar[] = "_putchar"
int i = 0;

while (_putchar[i] != '\0')
{

_putchar(_putchar[i]);
i+1;
}

_putchar('\n');

 return(0);

} 
