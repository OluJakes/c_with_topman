#include <stdio.h>

void tTable(int a)
{
	int b;
	for (b = 1; b <= a; b++)
		b < a ? printf("%d, ", b) : printf("%d\n", b);
}

int main(void)
{
	tTable(200);

	return (0);
}
