#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of all the data(n) in the list
 * @head: pointer to the head of the list
 * Return: returns the sum of the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
