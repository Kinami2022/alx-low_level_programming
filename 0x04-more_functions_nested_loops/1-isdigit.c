#include "main.h"

/**
 * _isdigit - check if the number are 0 - 9
 * @d: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int d)
{
if (d >= '0' && d <= '9')
return (1);
else
return (0);

}
