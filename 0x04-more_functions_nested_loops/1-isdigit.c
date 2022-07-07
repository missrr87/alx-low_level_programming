#include "main.h"
/**
 * _isdigit -checks a digit 0 to 9
 *
 * Return: 1 (if it is 0 to 9), 0 (if not)
 */
int _isdigit(int c)
{
if (c >= 0 && c < 10)
{
return (1);
}
else 
{
return (0);
}
}
