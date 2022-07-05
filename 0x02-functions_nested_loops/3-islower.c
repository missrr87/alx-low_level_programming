#include "min.h"
/**
 * _islower - checks if a letter is lowercase or not
 *
 * Return: 1 (success); -1 (not success)
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
