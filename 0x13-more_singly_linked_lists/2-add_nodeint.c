#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning linked list
 * @head: starting node in the linked list
 * @n: data to insert as the new head of the linked list
 * Return: return new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

