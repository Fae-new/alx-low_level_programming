include "lists.h"

/**
 *print_listint -prints the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in the linked list.
 */


size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
i++;
printf("%d\n", h->n);
h = h->next;
}

return (i);
}
