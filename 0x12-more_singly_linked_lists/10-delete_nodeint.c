#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index in a linked list.
 * @head: head node of type struct listint_t.
 * @index: position where node must be deleted.
 *
 * Return: 1 on success, -1 on error.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *temp_node;
	unsigned int i;

	current_node = *head;

	for (i = 0; current_node != NULL; i++)
	{
		if (index == 0)
		{
			*head = current_node->next;
			free(current_node);
			return (1);
		}
		else if (i == (index - 1))
		{
			temp_node = current_node->next;
			current_node->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		current_node = current_node->next;
	}
	return (-1);
}
