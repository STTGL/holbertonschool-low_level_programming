#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node of the list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
