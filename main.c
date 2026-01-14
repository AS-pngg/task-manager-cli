#include <stdio.h>
#include "task.h"

void show_menu() {
    printf("\n--- Task Manager ---\n");
    printf("1. Add Task\n");
    printf("2. View Tasks\n");
    printf("3. Mark Task as Completed\n");
    printf("4. Delete Task\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;

    do {
        show_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Add Task selected\n");
                break;
            case 2:
                printf("View Tasks selected\n");
                break;
            case 3:
                printf("Mark Task selected\n");
                break;
            case 4:
                printf("Delete Task selected\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option\n");
        }
    } while (choice != 5);

    return 0;
}
