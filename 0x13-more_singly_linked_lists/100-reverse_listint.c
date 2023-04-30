#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * reverse_listint - function that reverses a linked list
 * @head: starting node
 * Return: new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

