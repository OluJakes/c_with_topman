#include <stdio.h>

int main(void)
{
    int pin = 4321;
    int inputed_pin, trial = 3;

    printf("Welcome Olu! Please enter your PIN: ");
    scanf("%i", &inputed_pin);

    for (; trial > 0; trial--)
    {
	    if (inputed_pin != pin)
	    {
		    printf("Incorrect PIN! %d more trials: ", trial);
		    scanf("%i", &inputed_pin);
	    } else if (inputed_pin == pin)
	    {
		    printf("Successfully logged in\n");
		    return (0);
	    }
    }
    printf("You have exhausted your chances, PIN blocked!\n");

    return (-1);
}
