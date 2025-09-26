/*Write a C program that:

Prompts the user for a single positive integer n.

Repeatedly shows a menu until the user chooses 4 (Exit):

Print all odd numbers up to n (inclusive): 1 3 5 ...

If n is divisible by 2, print its square; otherwise print a message that it isn’t divisible by 2.

Print n asterisks * on one line.

Exit the program.

If the user enters an invalid menu option, show an error and re-display the menu.*/




#include<stdio.h>

void main()
{
    int temp =1,n, choice;
    printf("Enter a number : ");
    scanf("%d",&n);
    do
    {

    printf("1.OddDisplay \n 2. EvenSquare \n 3.*print \n 4. Exit \n");
    scanf("%d",&choice);

        if(choice ==1){
            while(temp<=n)
            {
                if(temp%2!=0)
                    printf("%d ",temp);
            temp++;
            }
        }
        else if(choice ==2){
            if(n%2==0)
                printf(" Square of n = %d",n*n);
            else
                printf("N is not divisable by 2");
        }
        else if(choice ==3)
        {
            temp =n;
            while(temp>0)
            {
                printf("*");
                temp--;
            }
        }
        else
            printf("Invalid Choice");
    } while (choice !=4);
}