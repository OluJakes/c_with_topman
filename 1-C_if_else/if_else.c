#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number;

    srand(time(0));
    number = rand() - RAND_MAX / 2;
    if (number > 5)
	printf("%d is greater than five\n", number);
    else if (number == 5)
	printf("%d is equal to five\n", number);
    else
	printf("%d is less than five\n", number);

    return (0);
}
