#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char name[10] = "Topman";
	pid_t id;

	printf("hello %s\n" , name);
	
	id= getpid();
	printf("Process ID: %u\n", id);

	return (0);
}

