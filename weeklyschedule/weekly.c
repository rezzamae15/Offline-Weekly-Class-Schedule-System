#include <stdio.h>

void inputSchedule(
    char subject[7][10][50],
    char time[7][10][50],
    char instructor[7][10][50],
    char building[7][10][50],
    int count[7],
    char *dayName[]
) {
    for (int i = 1; i <= 6; i++) {
        printf("\n--- Enter Schedule for %s ---\n", dayName[i]);

        printf("How many subjects for %s? ", dayName[i]);
        scanf("%d", &count[i]);

        for (int j = 0; j < count[i]; j++) {
            printf("\nEntry %d:\n", j + 1);
            printf("Enter subject: ");
            scanf("%49s", subject[i][j]);
            printf("Enter time: ");
            scanf("%49s", time[i][j]);
            printf("Enter instructor: ");
            scanf("%49s", instructor[i][j]);
            printf("Enter building/room: ");
            scanf("%49s", building[i][j]);
        }
    }
}

void displayDay(
    char name[30],
    char subject[7][10][50],
    char time[7][10][50],
    char instructor[7][10][50],
    char building[7][10][50],
    int count[7],
    char *dayName[]
) {
    int day;
    printf("\nChoose a day to display your schedule:\n");
    for (int i = 1; i <= 6; i++) {
        printf("  %d. %s\n", i, dayName[i]);
    }
    printf("Enter day number (1-6): ");
    scanf("%d", &day);

    if (day < 1 || day > 6) {
        printf("Invalid day number.\n");
        return;
    }

    printf("\nHello %s!\n", name);
    printf("Your schedule for %s:\n", dayName[day]);

    if (count[day] == 0) {
        printf("(No classes)\n");
    } else {
        for (int j = 0; j < count[day]; j++) {
            printf("\nClass %d:\n", j + 1);
            printf("- Subject: %s\n", subject[day][j]);
            printf("- Time: %s\n", time[day][j]);
            printf("- Instructor: %s\n", instructor[day][j]);
            printf("- Building/Room: %s\n", building[day][j]);
        }
    }
}

int main() {
    char name[30];
    char subject[7][10][50], time[7][10][50], instructor[7][10][50], building[7][10][50];
    int count[7] = {0};   

    char *dayName[] = {
        "Unused", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    int choice;

    printf("MY WEEKLY SCHEDULE\n");
    printf("Student Name: ");
    scanf("%s", name);

    while (1) {
        printf("\n========= MAIN MENU =========\n");
        printf("1. Input New Schedule\n");
        printf("2. Display Schedule by Day\n");
        printf("3. Back (Exit Program)\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            inputSchedule(subject, time, instructor, building, count, dayName);
        }
        else if (choice == 2) {
            int subChoice;
            while (1) {
                printf("\n--- Display Menu ---\n");
                printf("1. Choose Day\n");
                printf("2. Back to Main Menu\n");
                printf("Enter choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    displayDay(name, subject, time, instructor, building, count, dayName);
                } else if (subChoice == 2) {
                    break;  
                } else {
                    printf("Invalid choice.\n");
                }
            }
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid option.\n");
        }
    }

    return 0;
}

   