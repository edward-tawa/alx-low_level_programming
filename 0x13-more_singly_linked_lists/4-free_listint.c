#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * free_listint - function that frees a linked list
 * @head: starting node of listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

