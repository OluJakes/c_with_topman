#include "pointers.h"

char *add(int a, int b)
{
	char str[] = "done!";
	printf("%d + %d = %d\n", a, b, a+b);
	return (str);
}
