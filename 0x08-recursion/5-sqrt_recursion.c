#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - find the natural  square root of inputted number
 * @num: the number to find the square root 
 * @root: the root to be tested
 * Return:the square root
 */
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
