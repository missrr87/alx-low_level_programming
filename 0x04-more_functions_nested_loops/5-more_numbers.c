#include "main.h"
/**
 * more_numbers - zero to 14, ten times
 */
void more_numbers(void)
{
int t;
int n;
for (t = 0; t < 10; t++)
{
for (n = 0; n < 15; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
}
