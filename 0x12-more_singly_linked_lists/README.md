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
