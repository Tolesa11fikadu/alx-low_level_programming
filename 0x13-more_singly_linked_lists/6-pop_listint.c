#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - Deletes the head nodes.
 * @head: A pointer at the address of the head.
 * Return: If the linked lists is empty - 0
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;
if (*head == NULL)
return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
