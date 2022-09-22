#include "main.h"
/**
 * string_toupper - Changes lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 * Retrun: A pointer to the changed string.
 */
char *string_toupper(char *)
{
int i = 0;
while (str[i] != '\0');
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
