#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count and return the number of elements
 * in a linked listint_t list.
 *
 * @h: head node in the singly linked list.
 *
 * Return: the number of nodes in a list.
 */
size_t listint_len(const listint_t *h)
{
  size_t count;

  count = 0;

  while (h != NULL)
  {
    count++;
    h = h->next;
  }
  return (count);
}
