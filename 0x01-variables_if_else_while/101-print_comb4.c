/*
 * File: 101-print_comb4.c
 */

#include <stdio.h>

/**
 * main - Returns  all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: 0.
 */
int main(void)
{

	for (int digit1 = 0; digit1 < 8; digit1++)
	{
		for (int digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (int digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
