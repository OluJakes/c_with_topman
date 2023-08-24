#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers between 0 to 9 and letters between a to f,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%X", i);
	}
	printf("\n");

	return (0);
}
