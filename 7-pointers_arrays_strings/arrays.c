#include <stdio.h>

int main(void)
{
	int numbers[3] = {1, 2, 3};
	int num = 123;
	int idx = 0;
	float dec_num[3] = {2.3, 4.5, 0.9};

	/*
	printf("The size of numbers is %lu bytes\n", sizeof(numbers)); //12
	printf("The size of num is %lu bytes\n", sizeof(num)); //4
	*/

	printf("Addr of numbers[0]: %p\n", numbers);
	
//	printf("*numbers is %d\n", *numbers);
//	printf("Value at numbers+4: %d\n", numbers;

	for (; idx < 3; idx++)
		printf("%d ", numbers[idx]);
	putchar('\n');

	return (0);
}
