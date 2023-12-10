#include "lists.h"

/**
 * dlistint_len - returns number of elements of a dlistint_t list
 * @h: pointer to head node of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
