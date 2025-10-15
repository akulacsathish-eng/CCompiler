#include<stdio.h>


int func(int i)
{

    if (i==0)
        return 0;
    func(i-1);

    printf("in fucntion\n");
    i++;
}

int main()
{

    func(5);
}