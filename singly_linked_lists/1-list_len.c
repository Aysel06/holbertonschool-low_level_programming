#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - number of elements in list
 * @h: pointer to elements of type list_t
 * Return: count of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
