# Singly Linked List Project

* Data structure for this project:

```c
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
```

## Functions

```c
/* print_listint - print the elements of a linked list */
size_t print_listint(const listint_t *h);
```

```c
/* listint_len - return the number of elements in a linked list */
size_t listint_len(const listint_t *h);
```

```c
/* add_nodeint - add a node to the beginning of a linked list */
listint_t *add_nodeint(listint_t **head, const int n);
```

```c
/* add_nodeint_end - add a new node to the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);
```

```c
/* free_listint - free a list of type struct listint_t */
void free_listint(listint_t *head);
```

```c
/* free_listint2 - free a list of type struct listint_t and set head to NULL */
void free_listint2(listint_t **head);
```

```c
/*
 * pop_listint - delete the head node of a listint_t linked list
 * and return data stored in head node.
 */
int pop_listint(listint_t **head);
```

```c
/* get_nodeint_at_index - return the nth node of a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

```c
/* sum_listint - return the sum of all the data (n) of a linked list. */
int sum_listint(listint_t *head);
```

```c
/* insert_nodeint_at_index - insert a new node at a given position (index). */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

```c
/* delete_nodeint_at_index - delete a node at a given position (index) */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```
