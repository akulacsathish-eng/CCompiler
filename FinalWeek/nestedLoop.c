#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);


    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive integers!\n");
        return 0;
    }

    for (int i = 0; i < rows; i++) {          
        for (int j = 0; j < cols; j++) {     

          
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
