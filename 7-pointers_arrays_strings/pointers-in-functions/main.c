#include "pointers.h"

int main(void)
{
	char **rval = add(5, 10);
	printf("Return value: %s\n", **rval);

	return (0);
}
