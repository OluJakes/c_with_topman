#include <stdio.h>

int main(void)
{
	int num1 = 1, num2 = 23;
	int num3 = 6, num4 = 5;
	int num5 = 7, num6 = 1;
	int num7 = 8, num8 = 10;
	int num9 = 12, num10 = 19;
	int num11 = 10, num12 = 12;

	int sumOfNumbers1 = num1 + num2;
	int sumOfNumbers2 = num3 + num4;
	int sumOfNumbers3 = num5 + num6;
	int sumOfNumbers4 = num7 + num8;
	int sumOfNumbers5 = num9 + num10;
	int sumOfNumbers6 = num11 + num12;

	printf("%d + %d = %d\n", num1, num2, sumOfNumbers1);
	printf("%d + %d = %d\n", num3, num4, sumOfNumbers2);
	printf("%d + %d = %d\n", num5, num6, sumOfNumbers3);
	printf("%d + %d = %d\n", num7, num8, sumOfNumbers4);
	printf("%d + %d = %d\n", num9, num10, sumOfNumbers5);
	printf("%d + %d = %d\n", num11, num12, sumOfNumbers6);

	return (0);
}

