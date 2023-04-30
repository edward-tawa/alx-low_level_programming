#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the node
 * Return: return new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newnode;

	temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		temp = newnode;
		return (newnode);
	}

	temp->next = newnode;
	temp = newnode;

	return (newnode);
}
