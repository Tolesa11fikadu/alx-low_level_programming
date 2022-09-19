#include "main.h"
/**
 * swp_int - swaps two integers' valus
 * @n: first integer
 * @b: second integer
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
