#include "LISTS_H"
#include <stdio.h>
/**
 * print_listint - print all elements.
 * @h: A pointer to the head of the list_t.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}