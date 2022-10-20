#include "lists.h"
#include <string.h>
/**
 * add_node - Add a new node at the beginning.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to list_t list.
 * Return: If the function fails - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}
}
