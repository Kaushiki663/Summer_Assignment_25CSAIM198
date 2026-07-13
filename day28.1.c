//Question: Write a program to create library management system.

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

struct Book {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int isAvailable;
};

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    printf("Enter book ID: ");
                    scanf("%d", &books[count].id);
                    printf("Enter book title: ");
                    scanf("%s", books[count].title);
                    printf("Enter book author: ");
                    scanf("%s", books[count].author);
                    books[count].isAvailable = 1;
                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Maximum number of books reached.\n");
                }
                break;
            case 2:
                printf("\nBook Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Title: %s, Author: %s, Available: %s\n", books[i].id, books[i].title, books[i].author, books[i].isAvailable ? "Yes" : "No");
                }
                break;
            case 3:
                int search_id;
                printf("Enter book ID to issue: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (books[i].id == search_id) {
                        if (books[i].isAvailable) {
                            books[i].isAvailable = 0;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book is not available.\n");
                        }
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter book ID to return: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (books[i].id == search_id) {
                        if (!books[i].isAvailable) {
                            books[i].isAvailable = 1;
                            printf("Book returned successfully!\n");
                        } else {
                            printf("Book was not issued.\n");
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