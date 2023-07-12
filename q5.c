// Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <string.h>

#define MAX_EMAILS 100
#define MAX_LENGTH 100

int main() {
    int num_emails;
    char emails[MAX_EMAILS][MAX_LENGTH];

    printf("Enter the number of email addresses: ");
    scanf("%d", &num_emails);

    printf("Enter %d email addresses:\n", num_emails);
    for (int i = 0; i < num_emails; i++) {
        scanf("%s", emails[i]);
    }

    int odd_email_index = -1;

    for (int i = 0; i < num_emails; i++) {
        if (strchr(emails[i], '@') == NULL) {
            odd_email_index = i;
            break;
        }
    }

    if (odd_email_index != -1) {
        printf("The odd email out is: %s\n", emails[odd_email_index]);
    } else {
        printf("All email addresses have '@' symbol.\n");
    }

    return 0;
}
