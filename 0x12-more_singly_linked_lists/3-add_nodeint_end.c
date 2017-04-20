#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: head node of type struct listint_t.
 * @n: value passed to store into the node to be created.
 *
 * Return: the address of the newly created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *new_node;
  listint_t *temp;

  new_node = malloc(sizeof(listint_t));

  new_node->n = n;
  new_node->next = NULL;

  if (new_node == NULL)
  {
    return (NULL);
  }
  else if (*head == NULL)
  {
    *head = new_node;
  }
  else
  {
    temp = *head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new_node;
  }
  return (temp);
}
