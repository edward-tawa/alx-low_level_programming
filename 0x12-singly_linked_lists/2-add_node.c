#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: pointer to a pointer list_t list
 * @str: string node
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int length = 0;

	while (*str != '\0')
		length++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}

