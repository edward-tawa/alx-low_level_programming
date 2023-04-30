#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * sum_listint - function that calculates sum of data in linked list
 * @head: starting node of the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

