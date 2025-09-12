#include<stdio.h>
/*Write a C program to repeatedly ask the user to enter a positive number. 
The program should stop only when the user enters 0.
 Print each valid number entered.*/

int main()
{
   


    for( int number=0;number<10;number++)
    {
            
            printf("Number =%d ",number);
             if(number%2==1)
                break;
           
    }


    return 0;
}