/*
 * 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - Returns alphabet in lowercase and Uppercase.
 *
 * Return: 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
