#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * get_nodeint_at_index - function that returns node at a particular position
 * @head: starting node in the linked list
 * @index: position of the node to return
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}

	return (temp);
}

