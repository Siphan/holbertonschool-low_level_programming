#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the data stored in each element of a
 * listint_t list and return the number of elements in that list.
 * @h: head node in the singly linked list.
 *
 * Return: the number of nodes in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
