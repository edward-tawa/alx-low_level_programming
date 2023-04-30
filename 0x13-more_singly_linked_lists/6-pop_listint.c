#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: first node in the linked list
 * Return: head node data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

