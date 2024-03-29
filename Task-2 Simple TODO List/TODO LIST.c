#include <stdio.h>
#include <string.h>
#define MAX_TASKS 10

struct Task {
    char description[100];
    int isCompleted;
};
/// @brief
/// @return
int main() {
    struct Task tasks[MAX_TASKS];
    int numTasks = 0;

    int choice;

    while (1) {
        printf("\nTo-Do List\n");
        printf("1. Add Task\n");
        printf("2. Edit Task\n");
        printf("3. Mark Task Complete\n");
        printf("4. View List\n");
        printf("5. Exit\n");
        printf("Enter your choice:- ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numTasks == MAX_TASKS) {
                    printf("Error: Maximum number of tasks reached\n");
                } else {
                    printf("Enter task description:- ");
                    scanf(" %[^\n]", tasks[numTasks].description);
                    tasks[numTasks].isCompleted = 0;
                    numTasks++;
                    printf("Task added successfully\n");
                }
                break;
            case 2:
                if (numTasks == 0) {
                    printf("Error: No tasks to edit\n");
                } else {
                    int editIndex;
                    printf("Enter task number to edit:- ");
                    scanf("%d", &editIndex);

                    if (editIndex < 1 || editIndex > numTasks) {
                        printf("Error: Invalid task number\n");
                    } else {
                        editIndex--;

                        printf("Enter new task description:- ");
                        scanf(" %[^\n]", tasks[editIndex].description);
                        printf("Task edited successfully\n");
                    }
                }
                break;
            case 3:
                if (numTasks == 0) {
                    printf("Error: No tasks to mark complete\n");
                } else {
                    int completeIndex;
                    printf("Enter task number to mark complete:- ");
                    scanf("%d", &completeIndex);

                    if (completeIndex < 1 || completeIndex > numTasks) {
                        printf("Error: Invalid task number\n");
                    } else {
                        completeIndex--;
                        tasks[completeIndex].isCompleted = 1;
                        printf("Task marked complete successfully\n");
                    }
                }
                break;
            case 4:
                if (numTasks == 0) {
                    printf("No tasks in the list\n");
                } else {
                    printf("\nTasks:\n");
                    for (int i = 0; i < numTasks; i++) {
                        printf("%d. %s - %s\n", i + 1, tasks[i].description, tasks[i].isCompleted ? "Completed" : "Pending");
                    }
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
