#include <stdio.h>
#include <time.h>
#include <stddef.h>
/**
 * main - generates random valid passwords
 * Return: 0 (on success)
 */
int main(void)
{
void null;
int pass, sum;
srand(time(null));
sum = 0;
while (sum <= 2645)
{
pass = (rand() % 128);
sum += pass;
printf("%c", pass);
}
printf("%c", 2772 - sum);
return (0);
}
