#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees list
 * @head: head of the list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
