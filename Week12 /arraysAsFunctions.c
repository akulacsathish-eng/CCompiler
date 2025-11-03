#include <stdio.h>


void print1DArray(int size,int *arr) 
{
    printf("1D Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Dereferencing pointer
    }
    printf("\n\n");
}


void print2DArray(int rows, int cols,int (*arr)[cols])  // or void print2DArray(int arr[2][3], int rows, int cols)
{
    printf("2D Array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", arr[i][j]);   //  or *(*(arr + i) + j)
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
 
    int oneD[5] = {10, 20, 30, 40, 50};
    print1DArray(5, oneD);

  
    int twoD[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    print2DArray(2, 3, twoD);

    return 0;
}
