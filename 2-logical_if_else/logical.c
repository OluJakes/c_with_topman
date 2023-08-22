#include <stdio.h>
#include <string.h>

char *expectedUsername = "olu";
char *expectedUsername2 = "joe";
unsigned int expectedCohort = 16;
/*main - entry point.
 *
 *Description - program to check random number
 *return - always 0
 */

int main(void)
{
    char username[20];
    unsigned int cohort;

    printf("Enter username: ");
    scanf("%s", username);
    printf("What's your cohort?: ");
    scanf("%ul", &cohort);

    if ((!strcmp(username, expectedUsername) || !strcmp(username, expectedUsername2)) && cohort == expectedCohort)
    {
	//printf("%s\n", expectedUsername);
	printf("Hi %s, you're welcome!\n", username);
    } else
    {
	//printf("%s\n", expectedUsername);
	printf("Sorry %s, you're not allowed here\n", username);
    }

    return (0);
}
