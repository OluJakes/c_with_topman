#include <stdio.h>

void tTable(int a)
{
	for (int b = 1; b <= a; b++)

		printf("%d, ", b);
}

int main(void)
{
	tTable(200);

	return (0);
}
