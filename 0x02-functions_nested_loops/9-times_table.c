#include "main.h"
/**
 * times_table - multiplication table 9 by 9
 */
void times_table(void)
{
int n;
int m;
int p;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
p = n * m;
if (m == 0)
{
_putchar(p + '0');
}
if (m != 0 && p < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
