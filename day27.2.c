//Question: Write a program to create employee record management system.

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 100
#define MAX_DEPARTMENT_LENGTH 100

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    char department[MAX_DEPARTMENT_LENGTH];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    while (1) {
        printf("\nEmployee Record Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter employee name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter employee department: ");
                    scanf("%s", employees[count].department);
                    printf("Enter employee salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Maximum number of employees reached.\n");
                }
                break;
            case 2:
                printf("\nEmployee Records:\n");
                for (int i = 0; i < count; i++) {
                    printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
                }
                break;
            case 3:
                int search_id;
                printf("Enter employee ID to search: ");
                scanf("%d", &search_id);
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == search_id) {
                        printf("Employee found:\n");
                        printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
                        break;
                    }
                }
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}