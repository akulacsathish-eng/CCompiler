#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char ch;
    char line[200];
    char word[100];

    // ------------------ WRITE TO FILE ------------------
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "This is line two.\n");
    fprintf(fp, "Numbers 10 20 30\n");

    fclose(fp);

    // ------------------ READ USING fgetc ------------------
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    printf("=== Reading using fgetc() ===\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    rewind(fp);

    // ------------------ READ USING fgets ------------------
    printf("\n=== Reading using fgets() ===\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    rewind(fp);

    // ------------------ READ USING fscanf ------------------
    printf("\n=== Reading using fscanf() ===\n");
    while (fscanf(fp, "%99s", word) == 1) {
        printf("%s\n", word);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
