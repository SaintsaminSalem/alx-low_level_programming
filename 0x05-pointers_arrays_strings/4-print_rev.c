#include "main.h"

/**
 * print_rev - imprise en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	_putchar('\n');

}
