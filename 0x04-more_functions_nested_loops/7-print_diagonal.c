#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of times
 */
void print_diagonal(int n)
{
int t;
int b;
if (n <= 0)
{
_putchar(''\n);
}
else
{
for (t = 0; t < n; t++)
{
for (b = 0; b < t; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
