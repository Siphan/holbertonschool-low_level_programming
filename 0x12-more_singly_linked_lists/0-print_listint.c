#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - print the data stored in each element of a list.
 *
 * @temp: pointer to node to traverse the list.
 *
 * Return: the number of nodes in a list.
 */

size_t print_listint(const listint_t *h)
{
  Node* temp = h;
  size_t n;

  while (temp->next != NULL)
  {
    temp = temp->next;
    printf("%d\n", temp->n);
    m += 1;
  }
  return (m);
}
