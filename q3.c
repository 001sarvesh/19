//  Write a program to read and display a 2D array of strings in C language.

 #include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    char array[ROWS][COLS][50];  // Assuming maximum string length of 50 characters
    
    // Read input strings
    printf("Enter strings:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%s", array[i][j]);
        }
    }
    
    // Display the array
    printf("2D Array of Strings:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%s ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}