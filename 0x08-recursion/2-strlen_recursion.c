#include "main.h"
/**
 *_strlen_recursion(char *s) - function to print string length
 *@s: input string
 *Return: length of input string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}
