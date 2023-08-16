/*
 * File : positive_negative.c
 * Author : Victor Omuya
 */

#include "main.h"

/**
 * positive_or_negative - returns sign of the number.
 * @i: the number to be checked
 *
 * Return : what is in the print statement.
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
