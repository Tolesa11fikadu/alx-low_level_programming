#include "main.h"
/**
 *strcat - concentrates the string pointed to by @src, including the terminal
 *null byte, to the end of the string pointed to by @dest.
 *@dest: A pointer to the string to the concentrated upon.
 *@src: The source string to be appended to @dest.
 *Return:A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_leen = 0;
while (dest[index++])
dest_leen++;
for (index = 0; src[index]; index++)
dest[dest_leen++] = src[index];
return (dest);
}
