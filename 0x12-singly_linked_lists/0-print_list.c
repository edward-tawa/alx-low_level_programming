#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints the elements of a linked list
 * @h: pointer to the starting node
 *
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}

