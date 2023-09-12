#include <stdio.h>

int main(void)
{
	char str[4] = {'c', 'a', 'r', '\0'};
	char str[3] = "car";

	printf("Using %%s: %s\n", str);
	printf("Using %%p: %p\n", str);
	
	return (0);
}
