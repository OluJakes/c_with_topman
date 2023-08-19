#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	srand(time(0));

	int min = -99;
	int max = 99;

	int number = rand() % (max - min + 1) + min;
	if (number > 5)
		printf("%d is greater than five\n", number);
	else if (number == 5)
		printf("%d is equal to five\n", number);
	else
		printf("%d is less than five\n", number)    ;

	return (0);
} 
