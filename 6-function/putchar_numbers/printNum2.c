#include <stdio.h>

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + 1);
		number++;
	}
	putchar('\n');

	return 0;
}
