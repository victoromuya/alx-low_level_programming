#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char init;
	int i, len, len2;

	len = 0;
	len2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		init = s[i];
		s[i] = s[len2];
		s[len2--] = init;
	}
}
