#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n : a number
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x);
}
