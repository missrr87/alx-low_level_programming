#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet a to z 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int az;
int n;
for (n = 0; n < 10; n++)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
}
}
