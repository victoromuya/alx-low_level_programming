/*
 * File: 4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - Returns the alphabet in lowercase, except for q and e.
 *
 * Return: 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
