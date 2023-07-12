// Create an authentication system. It should be menu driven

#include <stdio.h>
#include <string.h>

#define MAX_USERS 10
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} User;

int authenticateUser(User users[], int numUsers, char *username, char *password) {
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            return 1; // Authentication successful
        }
    }
    return 0; // Authentication failed
}

void addUser(User users[], int *numUsers) {
    if (*numUsers >= MAX_USERS) {
        printf("Maximum number of users reached. Cannot add more users.\n");
        return;
    }

    User newUser;
    printf("Enter username: ");
    scanf("%s", newUser.username);
    printf("Enter password: ");
    scanf("%s", newUser.password);

    users[*numUsers] = newUser;
    (*numUsers)++;
    printf("User added successfully.\n");
}

void printMenu() {
    printf("\n--- Authentication System Menu ---\n");
    printf("1. Authenticate user\n");
    printf("2. Add user\n");
    printf("3. Exit\n");
    printf("----------------------------------\n");
}

int main() {
    User users[MAX_USERS];
    int numUsers = 0;
    int choice;

    do {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char username[MAX_USERNAME_LENGTH];
                char password[MAX_PASSWORD_LENGTH];
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%s", password);

                if (authenticateUser(users, numUsers, username, password)) {
                    printf("Authentication successful.\n");
                    // Perform further actions for authenticated user
                } else {
                    printf("Authentication failed. Invalid username or password.\n");
                }

                break;
            }
            case 2:
                addUser(users, &numUsers);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

