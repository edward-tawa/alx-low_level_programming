#include "main.h"
/**
* positive_or_negative - returns the largest of 3 numbers
* @i: function parameter
* Return: largest number
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
