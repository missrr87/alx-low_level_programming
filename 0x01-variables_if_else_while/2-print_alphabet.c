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
char ch = 'a';
while (ch <= 'z')
{
putchar("%c \n", ch);
ch++;
}
return (0);
}
