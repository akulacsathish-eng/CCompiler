#include<stdio.h>


void temp()
{
    printf("printf temp calls iteself\n");
    temp();
}

void main()
{

    printf("Calls temp function\n");
    //calls temp function
    temp();
    printf("control is back to main\n");
}