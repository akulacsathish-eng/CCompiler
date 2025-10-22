#include<stdio.h>

int main()
{

    int val =5;
    int *val_ptr = &val;

    printf("The address of val = %p \n",);
    printf("The address of val_ptr = %p\n",);
    printf("The vlaue stored in val_ptr %p\n",);
    printf("The value stored in ptr = %d\n",);

    char vala ='a';
    char *val_ptra = &vala;

    printf("The address of val = %p\n", );
    printf("The address of val_ptr = %p\n",);
    printf("The vlaue stored in val_ptr %p\n",);
    printf("The value stored in ptr = %c\n",);

}