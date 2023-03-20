#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	char h;

	c = 'a';
	h = 'A';
	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (h <= 'z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
