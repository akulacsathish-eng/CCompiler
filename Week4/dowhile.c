#include<stdio.h>
/*Write a C program to repeatedly ask the user to enter a positive number. 
The program should stop only when the user enters 0.
 Print each valid number entered.*/
int main()
{

  int number;

    do
    {
        printf("Enter a positive num :");
        scanf("%d",&number);

        if(number>0)
        {
            printf("Valid");
        }
        else
            printf("Invalid");
    } while(number!=0);

    return 0;
}