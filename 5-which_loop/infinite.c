#include <stdio.h>

int main(void)
{
    int pin = 4321;
    int inputed_pin;

    printf("Welcome Olu! Please enter your PIN: ");
    scanf("%i", &inputed_pin);

    if (inputed_pin == 0)
    {
	    puts("Bye!!");
	    return (-1);
    }

    while (inputed_pin)
    {
	    if (inputed_pin != pin)
	    {
		    printf("Incorrect PIN! try again or enter '0' to quit: ");
		    scanf("%i", &inputed_pin);
	    } else {
		    printf("Successfully logged in\n");
		    return (0);
	    }
    }
}
