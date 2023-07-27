/* Create a C program that stimulates a basic ATM machine .It should allow users to check
their balance , deposit money and withdraw money */

#include <stdio.h>

int main() {
    double balance = 100000.0;
    int choice;
    double amount;

    printf("Welcome to the ATM!\n");

    while (1) {
        printf("\nATM Simulation\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Your current balance: $%.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);
            balance += amount;
            printf("Deposit successful. New balance: $%.2f\n", balance);
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful. New balance: $%.2f\n", balance);
            } else {
                printf("Insufficient funds. Unable to withdraw.\n");
            }
        } else if (choice == 4) {
            printf("Thank you for using the ATM!\n");
            break; //to get out of infinite while loop
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
