#include <stdio.h>

int main(void)
{
	char alpha = 'a';
	int num = 6;
	int *pointer;
	pointer = &num;
	*pointer = 10;

	printf("The size of char is %lu byte\n", sizeof(alpha));
	printf("The size of int is %lu bytes\n", sizeof(num));
	printf("The address of num is %p\n", &num);
	printf("The content of 'pointer' is %p\n", pointer);
	printf("pointer = %d\n", *pointer);
	printf("num is now %d\n", num);

	return (0);
}
