#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * listint_len - function that returns the number of elements in a linked lists
 * @h: starting node of linked list listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

