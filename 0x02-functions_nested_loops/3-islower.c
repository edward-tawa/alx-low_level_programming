#include "main.h"

/**
 * islower - lwercase ccharacter
 * Return: 1 for lowercase character or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

