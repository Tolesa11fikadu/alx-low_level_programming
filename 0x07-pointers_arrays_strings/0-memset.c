#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
