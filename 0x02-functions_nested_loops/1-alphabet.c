#include "main.h"
/**
 * print_alphabet - prints alphabet a to z in lowercase
 *
 * Return: in success 1: on error -1
 */
void print_alphabet(void)
{
int az;
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
