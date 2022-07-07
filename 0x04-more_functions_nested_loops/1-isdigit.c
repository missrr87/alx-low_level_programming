#include "main.h"
/**
 * _isdigit -checks a digit 0 to 9
 * @c: an integer to be checked
 * Return: 1 (if it is 0 to 9), 0 (if not)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
