#include "main.h"
/**
 * *string_toupper - Changes lowercase letters of a string to uppercase.
 * @str: The string to be changed.
 * Retrun: A pointer to the changed string.
 */
char *string_toupper(char *)
{
int index = 0;
while (str[index]);
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
