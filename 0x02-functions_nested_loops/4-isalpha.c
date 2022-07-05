#include "main.h"
/**
 * _isalpha - checks if c is alphabet or not
 * @c : a character
 *
 * Return: 1 (success); 0 (not success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z')
|| (c >= 'A' && c <= 'Z'))
return (1);
}
