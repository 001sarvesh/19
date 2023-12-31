// . Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user

#include <stdio.h>
#include <string.h>

void sortCityNames(char cities[][50], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                char temp[50];
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
}

int main() {
    char cities[10][50];

    printf("Enter 10 city names:\n");
    for (int i = 0; i < 10; i++) {
        printf("City %d: ", i + 1);
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';  // Remove trailing newline character
    }

    sortCityNames(cities, 10);

    printf("\nSorted city names:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", cities[i]);
    }

    return 0;
}
