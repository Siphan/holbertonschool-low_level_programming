/* This program adds nodes to a double linked list */

/*
 * Your functions will take as parameters the List to modify, and the string (char *) to copy in the node
 * Your functions must return 1 if it failed and 0 if it worked well.
 * You are allowed to use the function strdup (man 3 strdup)
 */

int add_end_dl_list(List **, char *);
int add_begin_dl_list(List **, char *);

struct List* head; /* global variable - pointer to head node */

/* Creates a new Node and returns pointer to it. */
struct List* GetNewNode(int x) {
	struct List* newNode
		= (struct List*)malloc(sizeof(struct List));
	newNode->str = strdup(str);
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

/* This function adds a node to the beginning of the double linked list */
int add_begin_dl_list(List **, char *)
{
struct List* newNode = GetNewNode(x);

head = malloc(sizeof(List));
if (head == NULL) {
  head = newNode;
  return (1);
}
head->str = strdup(str); /* Necessary? */
head->prev = newNode;
newNode->next = head;
head = newNode;

free(List);
return (0);
}

/* This function adds a node to the end of the double linked list */
int add_end_dl_list(List **, char *)
{
  struct List* temp = head;
  struct List* newNode = GetNewNode(x);

  tail = malloc(sizeof(List));
  if (head == NULL) {
    head = newNode;
    return (1);
  }

  while(temp->next != NULL) temp = temp->next; /* Go To last Node */
  temp->str = strdup(str);
  temp->next = newNode;
  newNode->prev = temp;

  free(List);
  return (0);
}
