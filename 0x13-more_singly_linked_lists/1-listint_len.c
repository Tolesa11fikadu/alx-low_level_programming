#include "lists.h"
#include <stdio.h>
/**
 * listint_len - for returns the numbers of elements.
 * @h: A pointer to th head.
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
