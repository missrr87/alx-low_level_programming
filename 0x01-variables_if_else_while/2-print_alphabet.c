#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
