#include <stdio.h>

int main() {
    float a = 3.14159;
    float b = 12.5;
    float c = 0.789;

    printf("Original values:\n");
    printf("a = %f\nb = %f\nc = %f\n\n", a, b, c);

    printf("---- Demonstration of width.precision with %%f ----\n\n");

    printf("a with %%4.2f : %4.2f\n", a);
    printf("a with %%6.3f : %6.3f\n", a);
    printf("a with %%8.4f : %8.4f\n", a);
    printf("a with %%4.1f : %4.1f\n", a);
    printf("a with %%7.2f : %7.2f\n\n", a);

    printf("---- With different numbers ----\n\n");

    printf("b (12.5) with %%6.2f : %6.2f\n", b);
    printf("c (0.789) with %%6.3f : %6.3f\n", c);
    printf("c (0.789) with %%4.2f : %4.2f\n", c);
    printf("c (0.789) with %%8.4f : %8.4f\n", c);

    return 0;
}
