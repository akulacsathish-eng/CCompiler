#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;

    fp = fopen("grades.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No grades found in file.\n");
        return 1;
    }

    float average = (float)sum / count;

    printf("Total students: %d\n", count);
    printf("Sum of grades: %d\n", sum);
    printf("Average class grade: %.2f\n", average);

    return 0;
}
