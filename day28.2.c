//Question: Write a program to create bank account system.

#define MAX_ACCOUNTS 100
#define MAX_NAME_LENGTH 100

struct BankAccount {
    int id;
    char name[MAX_NAME_LENGTH];
    float balance;
};

int main() {
    struct BankAccount accounts[MAX_ACCOUNTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nBank Account System\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_ACCOUNTS) {
                    printf("Enter account ID: ");
                    scanf("%d", &accounts[count].id);
                    printf("Enter account holder name: ");
                    scanf("%s", accounts[count].name);
                    accounts[count].balance = 0.0;
                    count++;
                    printf("Account created successfully!\n");
                } else {
                    printf("Maximum number of accounts reached.\n");
                }
                break;
            case 2:
                printf("\nAccount Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Balance: %.2f\n", accounts[i].id, accounts[i].name, accounts[i].balance);
                }
                break;
            case 3:
                int search_id;
                float amount;
                printf("Enter account ID: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (accounts[i].id == search_id) {
                        printf("Enter deposit amount: ");
                        scanf("%f", &amount);
                        accounts[i].balance += amount;
                        printf("Amount deposited successfully!\n");
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter account ID: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (accounts[i].id == search_id) {
                        printf("Enter withdrawal amount: ");
                        scanf("%f", &amount);
                        if (accounts[i].balance >= amount) {
                            accounts[i].balance -= amount;
                            printf("Amount withdrawn successfully!\n");
                        } else {
                            printf("Insufficient balance.\n");
                        }
                        break;
                    }
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}