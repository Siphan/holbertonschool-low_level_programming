#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 *
 * @head: pointer to head of a linked list
 * Return: a pointer to the new head pointer
 */
listint_t *reverse_listint(listint_t **head)
// {
// 	listint_t *list, *temp;

// 	list = 0;
// 	while (*head != NULL)
// 	{
// 		temp = (*head)->next;
// 		(*head)->next = list;
// 		list = (*head);
// 		(*head) = temp;
// 	}
// 	(*head) = list;
// 	return (*head);
// }

{
	listint_t *current;
	listint_t *next;

	current = *head;
	if (current == NULL)
		return (NULL);
	next = current->next;
	current->next = NULL;
	while (next != NULL)
	{
		current = next;
		next = next->next;
		current->next = *head;
		*head = current;
	}
	return (*head);
}
