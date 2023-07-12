// . Write a program to print the strings which are palindrome. Write a program to print the strings which are palindrome in the list of strings in the list of strings

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_LENGTH 50

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    int num_strings;
    char strings[MAX_SIZE][MAX_LENGTH];

    printf("Enter the number of strings: ");
    scanf("%d", &num_strings);

    printf("Enter %d strings:\n", num_strings);
    for (int i = 0; i < num_strings; i++) {
        scanf("%s", strings[i]);
    }

    printf("Palindromic strings:\n");
    for (int i = 0; i < num_strings; i++) {
        if (isPalindrome(strings[i])) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}