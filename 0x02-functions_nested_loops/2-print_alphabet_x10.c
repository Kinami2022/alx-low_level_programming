#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times 
 * Return: void
 */
void print_alphabet_x10(void)
{
	char we;
	int i;
	i = 0;
	while (i < 10)
	{
		for (we = 'a'; we <= 'z'; we++)
		{
			_putchar(we);
		}
		_putchar('\n');
		i++;
	}

}
