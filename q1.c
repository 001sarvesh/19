// Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.

#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    char strings[5][100];
    int vowelCount[5];

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
    }

    for (int i = 0; i < 5; i++) {
        vowelCount[i] = countVowels(strings[i]);
        printf("Number of vowels in string %d: %d\n", i + 1, vowelCount[i]);
    }

    return 0;
}

