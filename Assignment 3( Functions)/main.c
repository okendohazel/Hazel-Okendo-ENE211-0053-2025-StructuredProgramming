#include <stdio.h>
#include <stdlib.h>
// Simple ATM Simulation
// Uses functions: login, menu, check balance, deposit, withdraw

#include <stdio.h>

// Global variable: every function can see and change it
float balance = 1000.00;

// Function declarations (prototypes)
int  login(void);
void showMenu(void);
void checkBalance(void);
void deposit(void);
void withdraw(void);

// Asks for username and password.
// Returns 1 if correct, 0 if wrong.
int login(void)
{
    int username;
    int password;

    printf("Username (number): ");
    scanf("%d", &username);
    printf("Password (PIN): ");
    scanf("%d", &password);

    // && means both must be correct
    if (username == 1406 && password == 2803)
    {
        printf("Login successful!\n");
        return 1;
    }
    else
    {
        printf("Wrong username or password.\n");
        return 0;
    }
}

// Prints the options
void showMenu(void)
{
    printf("\n--- ATM MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Choose: ");
}

// Prints the balance. Returns nothing (void).
void checkBalance(void)
{
    printf("Your balance is: %.2f\n", balance);
}

// Adds money to the balance
void deposit(void)
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance = balance + amount;
        printf("Deposit successful.\n");
    }
    else
    {
        printf("Invalid amount.\n");
    }
}

// Takes money from the balance, if there is enough
void withdraw(void)
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Not enough money.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawal successful.\n");
    }
}

int main(void)
{
    int choice = 0;   // starts at 0 so the loop below begins
    int tries = 0;
    int loggedIn = 0;

    // Give the user 3 chances to log in
    while (tries < 3 && loggedIn == 0)
    {
        loggedIn = login();
        tries++;
    }

    if (loggedIn == 0)
    {
        printf("Too many wrong attempts. Goodbye.\n");
        return 0;
    }

    // Keep showing the menu until the user picks 4
    while (choice != 4)
    {
        showMenu();
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: checkBalance(); break;
            case 2: deposit();      break;
            case 3: withdraw();     break;
            case 4: printf("Thank you. Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}
