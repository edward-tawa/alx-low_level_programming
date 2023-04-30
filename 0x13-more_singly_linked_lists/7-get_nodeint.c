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
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}

