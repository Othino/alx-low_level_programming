#include <stdio.h>

/**
 * bmain - Prints a message before main runs
 * Return: Nothing
 */

void __attribute__ ((constructor)) bmain()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
