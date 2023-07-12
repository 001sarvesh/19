// 4. Write a program to search a string in the list of strings

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_LENGTH 50

int search_string(char strings[][MAX_LENGTH], int size, char *search) {
    for (int i = 0; i < size; i++) {
        if (strcmp(strings[i], search) == 0) {
            return i;
        }
    }
    return -1;  // Return -1 if string not found
}

int main() {
    int num_strings;
    char strings[MAX_SIZE][MAX_LENGTH];
    char search[MAX_LENGTH];

    printf("Enter the number of strings: ");
    scanf("%d", &num_strings);

    printf("Enter %d strings:\n", num_strings);
    for (int i = 0; i < num_strings; i++) {
        scanf("%s", strings[i]);
    }

    printf("Enter the string to search: ");
    scanf("%s", search);

    int index = search_string(strings, num_strings, search);

    if (index != -1) {
        printf("String found at index %d\n", index);
    } else {
        printf("String not found\n");
    }

    return 0;
}