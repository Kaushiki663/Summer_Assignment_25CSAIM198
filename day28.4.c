//Question: Write a program to create contact management system.

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 100
#define MAX_PHONE_LENGTH 20

struct Contact {
    int id;
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_CONTACTS) {
                    printf("Enter contact ID: ");
                    scanf("%d", &contacts[count].id);
                    printf("Enter contact name: ");
                    scanf("%s", contacts[count].name);
                    printf("Enter contact phone: ");
                    scanf("%s", contacts[count].phone);
                    count++;
                    printf("Contact added successfully!\n");
                } else {
                    printf("Maximum number of contacts reached.\n");
                }
                break;
            case 2:
                printf("\nContact Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Phone: %s\n", contacts[i].id, contacts[i].name, contacts[i].phone);
                }
                break;
            case 3:
                int search_id;
                printf("Enter contact ID to search: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (contacts[i].id == search_id) {
                        printf("Contact found:\n");
                        printf("ID: %d, Name: %s, Phone: %s\n", contacts[i].id, contacts[i].name, contacts[i].phone);
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter contact ID to delete: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (contacts[i].id == search_id) {
                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        count--;
                        printf("Contact deleted successfully!\n");
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