#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the beginning of a singly linked list.
 * @head: pointer to the pointer of the first element of a linked list.
 * @n: value held at node.
 *
 * Return: address of newly added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	*head = new_node;

	return (new_node);
}
