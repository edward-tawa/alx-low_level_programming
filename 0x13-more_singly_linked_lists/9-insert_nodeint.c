#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * insert_nodeint_at_index - function that inserts new node at certain position
 * @head: first node in the list
 * @idx: position to add new node
 * @n: data to insert in the new node
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
		i++;
	}

	return (NULL);
}

