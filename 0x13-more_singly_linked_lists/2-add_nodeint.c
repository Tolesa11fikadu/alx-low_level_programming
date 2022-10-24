#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Adds the new the nodes at the beginning.
 * @head: A pointer to the address of the head.
 * @n: The integer to the new node contain.
 * Return: If th function fails - NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new ==  NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
