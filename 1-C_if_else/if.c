#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*main - entry point.
 *
 *Description - program to check random number
 *return - always 0
 */

int main(void)
{
	srand (time(0));

	int num;
	int num1 = 99;
	int num2 = -99;

	num = rand() % (num1 - num2 + 1) + num2;

	if (num > 5)
	printf("%d is greater than five\n", num);

	else if (num < 5)
		printf("%d is less than five\n", num);

	else
		printf("%d is equal to five\n", num);
	
	return (0);
}



