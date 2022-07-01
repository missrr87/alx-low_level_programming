#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all small except q and e
 *
 * Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
if (ch != 101 && ch != 113)
{
putchar(ch);
}
}
putchar(10);
return (0);
}
