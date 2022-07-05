#include "main.h"
/**
 * _islower - checks if a letter is lowercase or not
 *@c: is a character
 *
 * Return: 1 (success)
 *-1 (not success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
