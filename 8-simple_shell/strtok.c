#include <stdio.h>
#include <string.h>

int main(void)
{
	char bash_cmd[] = "ls -l";
	char *delim = " ";

	char *segment = strtok(bash_cmd, delim);
	while (segment != NULL)
	{
		printf("%s\n", segment);
		segment = strtok(NULL, delim);
	}
	
	/*
	char str[] = "We are learning together";
	char *segment;

	segment = strtok(str, " ");
	printf("%s\n", segment);

	segment = strtok(NULL, " ");
	printf("%s\n", segment);

	segment = strtok(NULL, " ");
	printf("%s\n", segment);

	segment = strtok(NULL, " ");
	printf("%s\n", segment);
	*/

	return (0);
}
