#include<stdio.h>

int main()
{

    int val =5;
    int *val_ptr = &val;

    printf("The address of val = %p \n",&val);
    printf("The address of val_ptr = %p\n",&val_ptr);
    printf("The vlaue stored in val_ptr %p\n",val_ptr);
    printf("The dereferenced value stored in ptr = %d\n",*val_ptr);

    char vala ='a'; 
    char *val_ptra ; //char *val_ptra = &vala;
    val_ptra = &vala;
    *val_ptra = 'c';

    printf("The address of val = %p\n", &vala);
    printf("The address of val_ptr = %p\n",&val_ptra);
    printf("The vlaue stored in val_ptr %p\n",val_ptra);
    printf("The dereferenced value stored in ptr = %c\n",*val_ptra);

}