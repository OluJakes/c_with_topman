#include <stdio.h>

void tTable(int a)
{
	int b;
	for (b=1; b<=12; b++)
		printf("%d * %d = %d\n", a, b, a * b);

}

int main(void)
{
	tTable(20);

	return (0);
}
