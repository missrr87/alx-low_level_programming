#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n : a number
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
int l;
if (n < 0)
n = -n;
l = n % 10;
if (l < 0)
l = -l;
_putchar('0' + l);
return (l);
}
