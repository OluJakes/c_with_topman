#include <stdio.h>

int main(void)
{
    char name[] = "Olumide";
    int idx = 0, j;
/*
    while (idx < 10)
    {
	printf("%i. ", idx+1);
	printf("%s\n", name);
	idx = idx + 1;
    }
*/
    while (idx < 10)
    {
	j = 0;
	while (name[j] != '\0')
	{
	    putchar(name[j]);
	    j = j +1;
	}
	putchar('\n');
	idx = idx + 1;
    }

    return (0);
}
