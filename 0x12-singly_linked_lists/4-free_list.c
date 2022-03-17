#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 * @head: Pointer
 */

void free_list(list_t *head)
{
	list_t *nd;

	while (head != NULL)
	{
		nd = head;
		head = head->next;
		free(nd->str);
		free(nd);
															}
}
