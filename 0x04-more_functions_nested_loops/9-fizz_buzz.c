#include "main.h"
#include <stdio.h>
/**
 * main - prints 1 to 100
 * if multiples of 3 print buzz
 * if multiples of 5 print buzz
 * for both print fizzbuzz
 * Return: 0
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf(" Fizz");
}
else if (n % 5 == 0 && n % 3 != 0)
{
printf(" Buzz");
}
else if (n % 3 == 0 && n % 5 == 0)
{
printf(" FizzBuzz");
}
else
{
printf(" %d", n);
}
}
printf("\n");
return (0);
}
