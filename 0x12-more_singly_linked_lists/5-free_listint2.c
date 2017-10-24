#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list of type struct listint_t and set head to NULL.
 * @head: head node of type struct listint_t.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head && *head)
	  {
		current_node = *head;

		while (current_node != NULL)
			{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
		*head = NULL;
	}
}
