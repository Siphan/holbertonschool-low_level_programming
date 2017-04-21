#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given index in a list.
 * @head: head node of type struct listint_t.
 * @index: index for insertion of new node.
 * @n: data to be inserted into new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new_node;
	unsigned int i;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = temp;
		return (temp);
	}
	for (i = 0; current_node != NULL; i++)
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else if (i == (idx - 1))
		{
			new_node->n = n;
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
