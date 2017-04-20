#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the data stored in each element
 * of a linked listint_t list and
 * return the number of elements in that list.
 *
 * @h: head node in the singly linked list.
 *
 * Return: the number of nodes in a list.
 */
size_t print_listint(const listint_t *h)
{
    size_t m;

    m = 0;

    while (h != NULL)
    {
      printf("%d\n", h->n);
      h = h->next;
      m++;
    }
    return (m);
}
