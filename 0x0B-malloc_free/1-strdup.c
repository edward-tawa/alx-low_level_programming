#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string to memory
 * @str: pointer to string to be duplicated
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
		dup[j] = str[j];

	return (dup);
}

