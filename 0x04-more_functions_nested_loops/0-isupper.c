#include "main.h"

/**
 * _isupper - execut uppercase letters
 * @c: char to check
 * Return: 0 or 1
 */

pnt _isupper(int  c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
