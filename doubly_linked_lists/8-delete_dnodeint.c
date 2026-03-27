#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node from spesific index in the list
 * @head: pointer to pointer to the head of the list
 * @index: wanted index
 * Return: 1 if successful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL && index != 0)
		return (-1);
	if (*head == NULL && index == 0)
		return (-1);
	if (index == 0)
	{
		tmp = *head, *head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp), tmp = NULL;
		return (1);
	}
	i = 1, tmp = (*head)->next;
	if (tmp)
	{
		while (tmp->next)
		{
			if (i == index)
			{
				tmp->next->prev = tmp->prev;
				tmp->prev->next = tmp->next;
				free(tmp), tmp = NULL;
				return (1);
			}
			tmp = tmp->next, i++;
		}
		if (index == i)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
