#include <stdio.h>


int globalVar = 100;

void demoFunction() {
 
    int localVar = 200;

    printf("\nInside demoFunction:\n");
    printf("  globalVar = %d\n", globalVar);   // OK: global accessible here
    printf("  localVar = %d\n", localVar);     // OK: local to this function

 
    if (1) {
        int blockVar = 300;  // only exists inside this if-block
        printf("  blockVar (inside if) = %d\n", blockVar);
    }

  
     printf("  blockVar (outside if) = %d\n", blockVar);
}

int main() {
    printf("Inside main:\n");
    printf("  globalVar = %d\n", globalVar);   // OK: global accessible here

  
    int mainLocal = 50;
    printf("  mainLocal = %d\n", mainLocal);

    demoFunction();

    // printf("  localVar from demoFunction = %d\n", localVar);

    // printf("  blockVar from demoFunction = %d\n", blockVar);

    return 0;
}
