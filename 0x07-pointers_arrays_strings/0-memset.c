#include "main.h"
/**
 * _memset - fill a block of memory with a specific memory
 * @s: starting address
 * @b: result
 * @n: bytes to be changed
 * Return: array with value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
