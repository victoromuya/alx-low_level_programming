#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at a
 * given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if successful else -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ui;

	if (index > 63)
		return (-1);

	ui = 1 << index;

	if (*n & ui)
		*n ^= ui;

	return (1);
}
