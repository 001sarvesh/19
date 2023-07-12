// Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 1 )

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_LENGTH 50

int minDistance(char words[][MAX_LENGTH], int size, char *word1, char *word2) {
    int index1 = -1;
    int index2 = -1;
    int minDist = size; // Initialize with maximum possible distance

    for (int i = 0; i < size; i++) {
        if (strcmp(words[i], word1) == 0) {
            index1 = i;
        } else if (strcmp(words[i], word2) == 0) {
            index2 = i;
        }

        if (index1 != -1 && index2 != -1) {
            int dist = abs(index1 - index2);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    return minDist;
}

int main() {
    int num_words;
    char words[MAX_SIZE][MAX_LENGTH];
    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];

    printf("Enter the number of words: ");
    scanf("%d", &num_words);

    printf("Enter %d words:\n", num_words);
    for (int i = 0; i < num_words; i++) {
        scanf("%s", words[i]);
    }

    printf("Enter word1: ");
    scanf("%s", word1);

    printf("Enter word2: ");
    scanf("%s", word2);

    int distance = minDistance(words, num_words, word1, word2);

    printf("Minimum distance between '%s' and '%s' is %d\n", word1, word2, distance);

    return 0;
}