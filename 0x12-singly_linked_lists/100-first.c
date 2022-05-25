#include <stdio.h>

/**
 * bmain - Function executed before main
 * Return: Always 0
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");

	return (0);
}
