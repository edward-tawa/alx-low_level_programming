#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: memory copied with n bytes
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	while (j < i)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
