#include <stdio.h>

int main(void)
{
	int first = 2, second =  5, var;

	puts("---Before swap---");
	printf("first: %d\nsecond: %d\n", first, second);

	var = first;
	first = second;
	second = var;
	puts("---After swap---");
	printf("first: %d\nsecond: %d\n", first, second);

	return (0);
}
