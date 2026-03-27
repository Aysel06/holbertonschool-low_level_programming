#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets node in the spesific index
 * @head: pointer to the head of the list
 * @index: wanted index
 * Return: pointer to head if successful
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}
	return (NULL);
}
