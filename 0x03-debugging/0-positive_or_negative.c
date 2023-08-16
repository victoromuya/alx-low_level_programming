/*File : positive_negative.c
 *Author : Victor Omuya
 */

include "main.h"

void positive_negative(int i)
{
	if(i > 0)
		printf("%d is positive\n", i);
	else if(i < 0)
		printf("%d is negative\n", i);
	else
		print("%d is zero\n", i);
}
