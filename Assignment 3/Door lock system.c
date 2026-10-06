
#include <stdio.h>

int main()
{
    int age;
    int pin;
    int correctpin = 1406;
    int attempts = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Access denied - minor\n");
        return 0;
    }
    printf("Age verified\n\n");

    while (attempts < 3)
    {
        printf("Enter pin: ");
        scanf("%d", &pin);

        if (pin < 1000 || pin > 9999)
        {
            printf("Invalid pin. Pin must be 4 digits (1000-9999)\n");
        }
        else if (pin == correctpin)
        {
            printf("Access granted. Door unlocked\n");
            return 0;
        }
        else
        {
            attempts++;
            printf("Incorrect pin. Attempts remaining: %d\n", 3 - attempts);
        }
    }

    printf("Too many incorrect attempts\n");
    printf("System locked\n");
    return 0;
}
