/*
 * File: 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
