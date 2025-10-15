#include<stdio.h>


void func(int *a)
{
    *a=6;
    printf("Value of a in fucntion = %d\n",*a);
}

void main()
{
    int b=8;
    func(&b);
    printf("Value of b in main %d\n",b);
    scanf("%d",&b);
}