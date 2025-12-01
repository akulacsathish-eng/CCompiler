#include <stdio.h>
#include <stdlib.h>


void createFile() {
    char filename[50];
    FILE *fp;

    printf("Enter the file name to create: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return;
    }

    printf("File '%s' created successfully.\n", filename);

    fclose(fp);
}

void writeFile() {
    char filename[50];
    char text[200];
    FILE *fp;

    printf("Enter the file name to write to: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    printf("Enter text to append (one line): ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Text written to '%s' successfully.\n", filename);

    fclose(fp);
}

void readFile() {
    char filename[50];
    char ch;
    FILE *fp;

    printf("Enter the file name to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading! File may not exist.\n");
        return;
    }

    printf("\n--- File Contents ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\n--- End of File ---\n");

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n----- File Handling Menu -----\n");
        printf("1. Create a new file\n");
        printf("2. Write text to an existing file\n");
        printf("3. Read and display contents of a file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

      

        switch (choice) {
            case 1:
                createFile();
                break;

            case 2:
                writeFile();
                break;

            case 3:
                readFile();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
