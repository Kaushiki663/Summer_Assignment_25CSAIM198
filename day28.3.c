//Question: Write a program to create ticket booking system.

#define MAX_TICKETS 100
#define MAX_NAME_LENGTH 100

struct Ticket {
    int id;
    char name[MAX_NAME_LENGTH];
    float price;
    int isBooked;
};

int main() {
    struct Ticket tickets[MAX_TICKETS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nTicket Booking System\n");
        printf("1. Add Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_TICKETS) {
                    printf("Enter ticket ID: ");
                    scanf("%d", &tickets[count].id);
                    printf("Enter ticket name: ");
                    scanf("%s", tickets[count].name);
                    printf("Enter ticket price: ");
                    scanf("%f", &tickets[count].price);
                    tickets[count].isBooked = 0;
                    count++;
                    printf("Ticket added successfully!\n");
                } else {
                    printf("Maximum number of tickets reached.\n");
                }
                break;
            case 2:
                printf("\nTicket Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Price: %.2f, Booked: %s\n", tickets[i].id, tickets[i].name, tickets[i].price, tickets[i].isBooked ? "Yes" : "No");
                }
                break;
            case 3:
                int search_id;
                printf("Enter ticket ID to book: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (tickets[i].id == search_id) {
                        if (!tickets[i].isBooked) {
                            tickets[i].isBooked = 1;
                            printf("Ticket booked successfully!\n");
                        } else {
                            printf("Ticket is already booked.\n");
                        }
                        break;
                    }
                }
                break;
            case 4:
                printf("Enter ticket ID to cancel booking: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (tickets[i].id == search_id) {
                        if (tickets[i].isBooked) {
                            tickets[i].isBooked = 0;
                            printf("Booking cancelled successfully!\n");
                        } else {
                            printf("Ticket is not booked.\n");
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