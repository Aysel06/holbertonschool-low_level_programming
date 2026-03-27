#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds node to the head of the list
 * @head: pointer to pointer to the head of the list
 * @n: pointer of number of nodes
 * Return: pointer to new list if successful
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
