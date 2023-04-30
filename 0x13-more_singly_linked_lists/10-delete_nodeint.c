#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * delete_nodeint_at_index - function that deletes a node at a given position
 * @head: first node in the list
 * @index: position of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;

	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL)
			return (-1);
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
free(current);

	return (1);
}

