#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to the end of the list
 * @head: head of node
 * @str: element must be added
 * Return: pointer to new list if successful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int counter = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[counter] != '\0')
		counter++;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = counter;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
