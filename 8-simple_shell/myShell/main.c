#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	char *prompt = "($) ";
	char *user_input = NULL;
	size_t no = 10;
	char *delim = " ";
	char **rval = NULL;
	pid_t child_pid;
	int something;
	int c = 0;

	while(1)
	{
		printf("%s", prompt);
		getline(&user_input, &no, stdin);
		//printf("The command entered was: %s", user_input);

		rval[c] = strtok(user_input, delim);
		while (rval != NULL)
		{
			c++;
			rval[c] = strtok(NULL, delim);
		}
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			//bin/ls
			if (execve(rval[0], rval, NULL) == -1)
			{
				perror("Error:");
			}
			sleep(3);
		}
		wait(&something);
	}

	return (0);
}

