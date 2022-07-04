#include <stdio.h>
/**
 *main - all single digit nubers separated
 *by space and comma
 *
 * Return: Always (0)
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
