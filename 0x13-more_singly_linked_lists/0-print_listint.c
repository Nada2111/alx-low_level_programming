#include <stdio.h>
#include "lists.h"

/**
 * print_listint - that prints all the elements of a listint_t list
 * @h : head of list.
 *
 * Return: the numbers of nodes.
 */

size_t print_listint(const listint_t *h)

{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
