#include <stdio.h>

int main(void)
{
	int i = 0;

	for (;i < 16;)
	{
		printf("%x", i);
		i++;
	}
	printf("\nDone with forloop\n\n");

/* Using while loop */
	i = 0;
	while (i < 16)
	{
		printf("%X", i);
		i++;
	}
	printf("\nDone with while loop\n\n");

/* Using do-while loop */
	i = 0;
	do{
		printf("%x", i);
		i++;
	} while (i < 16);
	printf("\nDone with do-while loop\n");

	return (0);
}
