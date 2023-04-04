#include "main.h"
/**
 * _strpbrk - function that searches a string for set of bytes
 * @s: string to search
 * @accept: input bytes
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return (0);
}

