#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c: the character to print
 * Return: on success 1
 * onerror, -1 is returned, and errno is set approximately. 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
