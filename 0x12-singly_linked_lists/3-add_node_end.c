#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Pointer
 * @str: Pointer
 * Return: New node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int l;
	list_t *new_node, *lt;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (str == NULL || new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		l = 0;
		while (new_node->str[l] != '\0')
		{
			l++;
		}

		new_node->len = l;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		lt = *head;
		while (lt->next != NULL)
		{
			lt = lt->next;
		}
		lt->next = new_node;
		return (new_node);
	}
	return (NULL);
}



