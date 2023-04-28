#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that counts and returns the number of elements in a linked list
 * @h: pointer to the starting node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

