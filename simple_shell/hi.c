#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t id;

	printf("Hello %s\n", argv[1]);
	id = getpid();
	printf("pid: %u\n", id);

	return (0);
}
