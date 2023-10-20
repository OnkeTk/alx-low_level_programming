#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end a list_t list
 * @head: head of the linked list
 * @str: string to store the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t**head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)

		new_node->len = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current-node->next = new_node;
	}
	return (*head);
}
