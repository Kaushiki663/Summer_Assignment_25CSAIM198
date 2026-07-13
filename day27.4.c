//Question: Write a program to create marksheet generation system.

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nMarkSheet Generation System\n");
        printf("1. Add Student\n");
        printf("2. Generate MarkSheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    printf("Enter student ID: ");
                    scanf("%d", &students[count].id);
                    printf("Enter student name: ");
                    scanf("%s", students[count].name);
                    printf("Enter student marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;
            case 2:
                printf("\nMarkSheet:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
                }
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}