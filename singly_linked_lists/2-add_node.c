#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node to the head of the list
 * @head: head of list
 * @str: element must be added to the head of the list
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
