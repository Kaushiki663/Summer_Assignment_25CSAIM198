//Question: Write a program to create inventory management system.

struct Item {
    int id;
    char name[100];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int n = 0, choice;

    printf("Inventory Management System\n");

    while (1) {
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item ID: ");
                scanf("%d", &inventory[n].id);
                printf("Enter item name: ");
                scanf("%s", inventory[n].name);
                printf("Enter item quantity: ");
                scanf("%d", &inventory[n].quantity);
                printf("Enter item price: ");
                scanf("%f", &inventory[n].price);
                n++;
                break;
            case 2:
                printf("Inventory:\n");
                for (int i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                }
                break;
            case 3:
                int id;
                printf("Enter item ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (inventory[i].id == id) {
                        printf("Item found:\n");
                        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter item ID to update: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (inventory[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Enter new price: ");
                        scanf("%f", &inventory[i].price);
                        break;
                    }
                }
                break;
            case 5:
                printf("Enter item ID to delete: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (inventory[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            inventory[j] = inventory[j + 1];
                        }
                        n--;
                        break;
                    }
                }
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}