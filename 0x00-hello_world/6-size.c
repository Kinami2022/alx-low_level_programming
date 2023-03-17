#include <stdio.h>

/**
 * main - prints ("the size of various types on the computer it is compiled and run on.")
 * Return: 0 
 */
int main(void)
{

	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu bytes(s)\n", sizeof(int));
	printf("size of an long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of an long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of an float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
