// . Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed

#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define MAX_USERNAME_LENGTH 20

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    char usernames[MAX_USERS][MAX_USERNAME_LENGTH] = {"user1", "user2", "user3", "user4", "user5"};
    char username[MAX_USERNAME_LENGTH];
    int number;

    printf("Enter your username: ");
    scanf("%s", username);

    int validUser = 0;
    for (int i = 0; i < MAX_USERS; i++) {
        if (strcmp(username, usernames[i]) == 0) {
            validUser = 1;
            break;
        }
    }

    if (validUser) {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &number);

        int fact = factorial(number);
        printf("Factorial of %d is %d\n", number, fact);
    } else {
        printf("Invalid username. Access denied.\n");
    }

    return 0;
}







