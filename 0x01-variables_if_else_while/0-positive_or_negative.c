#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates a random number and output a message based on the value
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
return (0);
}
