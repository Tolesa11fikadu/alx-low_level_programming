#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - calculate the sum of all the data.
 * @head: A pointer to the head.
 * Return: If the list is empty - 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
