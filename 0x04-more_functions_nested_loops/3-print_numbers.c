#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
_putchar();
int i = 0;
while (i < 10)
_putchar(i++ + '0');
_putchar('\n');
}
