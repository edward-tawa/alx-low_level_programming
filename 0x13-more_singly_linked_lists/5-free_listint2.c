#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * free_listint2 - function that frees a whole linked list
 * @head: starting node to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

