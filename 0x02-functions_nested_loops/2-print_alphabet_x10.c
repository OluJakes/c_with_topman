#include "main.h"

/**
 * a function that prints 10 times the alphabet
 *
 * return : always 0
 *
 */
int print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}

	return (0);
}
