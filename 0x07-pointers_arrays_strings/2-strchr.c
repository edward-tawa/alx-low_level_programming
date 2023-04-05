#include "main.h"
/**
 * _strchr - function to locate character
 * @s: input string
 * @c: character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

