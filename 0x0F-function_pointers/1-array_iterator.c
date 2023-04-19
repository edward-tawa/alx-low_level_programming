#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints array elements
 * @array: array for functions
 * @size: number of elements
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

