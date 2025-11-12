#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

// Function to check password strength
int isStrongPassword(char password[]) {
    int hasDigit = 0;
    int length = strlen(password);

    if (length < 6)
        return 0;  // must be at least 6 characters

    for (int i = 0; i < length; i++) {
        if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
    }

    return hasDigit;  // must contain at least one digit
}

int main() {
    char password[MAX_LEN];
    char input[MAX_LEN];
    char newPassword[MAX_LEN];
    int loggedIn = 0;
    int choice;

    printf("===== PASSWORD MANAGER =====\n");

    //set initial password 
    while (1) {
        printf("Set your initial password: ");
        scanf("%s", password);

        if (isStrongPassword(password)) {
            printf("Password set successfully!\n");
            break;
        } else {
            printf("Weak password. Must be at least 6 characters and contain a digit.\n");
        }
    }

    //  Menu
    while (1) {
        printf("\n===== MAIN MENU =====\n");
        printf("1. Login\n");
        printf("2. Change Password\n");
        printf("3. Display Current Password\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter password to login: ");
                scanf("%s", input);

                if (strcmp(input, password) == 0) {
                    printf("Login Successful!\n");
                    loggedIn = 1;
                } else {
                    printf("Invalid Password.\n");
                }
                break;

            case 2:
                if (!loggedIn) {
                    printf("Please login first to change password.\n");
                    break;
                }

                while (1) {
                    printf("Enter new password: ");
                    scanf("%s", newPassword);

                    if (!isStrongPassword(newPassword)) {
                        printf("Weak password. Must be at least 6 characters and contain a digit.\n");
                        continue;
                    }

                    printf("Confirm new password: ");
                    scanf("%s", input);

                    if (strcmp(newPassword, input) == 0) {
                        strcpy(password, newPassword);
                        printf("Password changed successfully!\n");
                        break;
                    } else {
                        printf("Passwords do not match. Try again.\n");
                    }
                }
                break;

            case 3:
                if (loggedIn)
                    printf("Current Password: %s\n", password);
                else
                    printf("You must login to view the password.\n");
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
