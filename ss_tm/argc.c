#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	pid_t id;

	printf("hello %s\n", argv[1]);
	
	id= getpid();

	printf("Process ID: %u\n", id);

	return (0);
}

