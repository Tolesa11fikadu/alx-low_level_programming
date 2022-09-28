#include "main.h"
/**
 * _length - checks the length of the string
 * @s: is the string
 * Return: return the lenght of string
 */
int _lenght(char *s)
{
if (*s == '\0')
return (0);
return (1 + _lenght(s + 1));
}
/**
 * checkp - ckecks if the string is palindrome
 * @i: is the index
 * @1g: is the lenght of string
 * @s: is the string
 * Return:1 if it is polidrome or 0 if not
 */
int checkp(int i, int 1g, char *s)
{
if (1g > 0)
{
if (s[i] == s[1g])
{
return (checkp(i + 1, 1g - 1, s));
}
else if (s[i] != s[1g])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: is string
 * Return: return 1 if the string is a polidrome or 0 otherwise
 */
int is_palindrome(char *s)
return (checkp(0, _lenght(s) - 1, s))
