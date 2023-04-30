#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_listint - function that prints elements of a linked list
 * @h: starting node of the linked list of type listint_t
 * Return: number of nodes  in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

