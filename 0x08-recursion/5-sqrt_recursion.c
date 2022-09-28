#include "main.h"
/**
 * helperFunction - checks if the sqrt of number exits
 * @num: number
 * @psqrt: possible sqrt of number
 * Return: sqrt of number of -1 of error
 */
int helperFunction(int num, int psqrt)
{
if ((psqrt * psqrt) == num)
{
return (psqrt);
}
else
{
if ((psqrt * psqrt) > num)
return (-1);
else
return (helperFunction(num, psqrt + 1));
}
}
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to find the sqrt of number
 * Return: squareroot of n
 * -1 if n does not have a sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (helperFunction(n, 0));
}
