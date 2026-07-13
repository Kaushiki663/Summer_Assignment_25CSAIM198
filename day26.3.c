//Question: Write a program to create ATM machine simulation.

int main() {
    float balance = 1000.0; // Initial balance
    int choice;
    float amount;

    printf("Welcome to the ATM!\n");

    while (1) {
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful. Your new balance is: $%.2f\n", balance);
                break;
            case 3:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}