#include <stdio.h>

void addTwo(int num1, int num2); // function prototype
int main(void)
{
	addTwo(1, 23);
	addTwo(6, 5);
	addTwo(7, 1);
	addTwo(8, 10);
	addTwo(12, 19);
	addTwo(10, 12);

	return (0);
}

void addTwo(int num1, int num2)				
{							
	printf("%d + %d = %d\n", num1, num2, num1+num2);
}							
