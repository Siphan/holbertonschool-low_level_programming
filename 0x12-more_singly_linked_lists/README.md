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
/*
 * _putchar - write a char to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
```

```c
/*
 * print_listint - print the data stored in each element of a list.
 * Return: the number of nodes in a list.
 */
size_t print_listint(const listint_t *h);
```
