#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list.
 * @head: head node of type struct listint_t.
 *
 * Return: data stored in head node, 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (head && *head)
	{
        	if ((*head)->next != NULL)
        {
            	next_node = (*head)->next;
        }
        data = (*head)->n;
        free(*head);
        *head = next_node;
        }
        else
        {
            	return (0);
        }
        return (data);
}
