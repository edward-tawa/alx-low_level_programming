#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * free_listint_safe - function that frees a linked list
 * @h: starting node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int addr_diff;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h == NULL)
	{
		addr_diff = *h - (*h)->next;
		if (addr_diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}

