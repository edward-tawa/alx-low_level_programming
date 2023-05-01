#include "lists.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * looped_listint_len - function that counts the number of unique nodes
 * @head: starting node of listint_t
 * Return: If the list is not looped - 0.
 * Otherwise - number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}



/**
 * print_listint_safe - function that prints a listint_t list safely.
 * @head: pointer to the starting node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}

	else
	{
		while (i < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

