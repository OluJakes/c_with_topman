#include <stdio.h>

/*
 *
 *
 **/

int main(void)

{
	unsigned int i;
	unsigned int n = 1;
	unsigned int N = 2;


	printf("%u", n);
	printf(", %u", N);

	for (i=1; i < 90; i++)
	{
		printf(", %u", N += n); /* Prints 3 upon first iteration */
	/*	N += n; */
		n = N - n;
	}
	printf("\n");
	return (0);
}

