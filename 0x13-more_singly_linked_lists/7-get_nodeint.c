#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Locates the nodes.
 * @head: A pointer to the node.
 * @index: The index of the node.
 * Return: If the node does not exist - NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
