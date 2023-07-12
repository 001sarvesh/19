//  From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX_LENGTH 16

int isValidIP(char ip[]) {
    int num;
    int dotCount = 0;

    char *token = strtok(ip, ".");
    while (token != NULL) {
        num = atoi(token);

        if (num < 0 || num > 255) {
            return 0; // Invalid IP address
        }

        token = strtok(NULL, ".");
        dotCount++;
    }

    if (dotCount != 4) {
        return 0; // Invalid IP address
    }

    return 1; // Valid IP address
}

int main() {
    int num_ips;
    char ips[MAX_SIZE][MAX_LENGTH];

    printf("Enter the number of IP addresses: ");
    scanf("%d", &num_ips);

    printf("Enter %d IP addresses:\n", num_ips);
    for (int i = 0; i < num_ips; i++) {
        scanf("%s", ips[i]);
    }

    printf("Valid IP addresses:\n");
    for (int i = 0; i < num_ips; i++) {
        if (isValidIP(ips[i])) {
            printf("%s\n", ips[i]);
        }
    }

    return 0;
}
