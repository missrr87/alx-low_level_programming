#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: number of times
 */
void print_triangle(int size)
{
int a;
int b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 1; a <= size; a==)
{
for (b = a; b < size; b++)
{
_putchar(' ');
}
for (b = a; b <= 1; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
