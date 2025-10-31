#include <stdio.h>
  
int main(void) {
    int a = 4, b = 7, c = 12;
    int *p = &a;
    int *q = &b;
    int *r = p;   // Now r is a simple pointer, not a pointer to pointer

    *p = *q + 3;      // (1)
    r = q;            // (2)
    *r = a + c;       // (3)
    q = &c;           // (4)
    *p = *q - 2;      // (5)
    *r = b - a;       // (6)
    r = &a;           // (7)
    *q = *r + b;      // (8)

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}