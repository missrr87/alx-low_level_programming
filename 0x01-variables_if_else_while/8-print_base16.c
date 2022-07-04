#include <stdio.h>
/**
 * main - hexadecimal
 *
 * Return: Always 0
 */
int main(void)
{
int n;
char af;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (af = 'a'; af <= 'f'; af++)
{
putchar(af);
}
putchar(10);
return (0);
}

