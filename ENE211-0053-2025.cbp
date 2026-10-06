

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, result;
    char operation;

    // take two numbers as input
    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    // operator
    printf("Enter an operation (+, -, /, %%, *): ");
    scanf(" %c", &operation);

    // calculation and results
    switch (operation)
    {
        case '+':
            result = a + b;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", a, b, result);
            break;

        case '-':
            result = a - b;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", a, b, result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", a, b, result);
            } else {
                printf("\nError: Division by zero is undefined.\n");
            }
            break;

        case '*':
            result = a * b;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", a, b, result);
            break;

        case '%':
            if ((long)b != 0) {
                result = (long)a % (long)b;
                printf("\nResult: %.0lf %% %.0lf = %.0lf\n", a, b, result);
            } else {
                printf("\nError: Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Error! Invalid operation.\n");
    }

    return 0;
}

