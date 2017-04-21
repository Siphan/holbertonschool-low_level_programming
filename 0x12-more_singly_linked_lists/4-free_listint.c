#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list of type struct listint_t.
 * @head: head node of type struct listint_t.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
    listint_t *temp;

    while (head != NULL)
	  {
        temp = head;
        head = head->next;
        free(temp);
    }
}
