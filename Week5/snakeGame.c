#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snake()
{
    
    int pos =1,newpos, roll, turns=0;
    
    srand(time(NULL));

    while (pos !=100)
    {
        turns++;
        roll = rand()%6 +1;    
        newpos = pos + roll; 
        
        printf("Turn = %d, Die roll = %d \n", turns,roll);
        
        if( newpos >100)
            pos = pos ;
        else
            pos = newpos;

        switch(pos)
        {
            case 3:
                pos = 48;
                printf("Used a ladder to pos %d\n",pos);
                break;
            case 23:
                pos =52;
                printf("Used a ladder to pos %d\n",pos);
                break;
            case 99:
                pos =1;
                 printf("Used a snake to pos %d\n",pos);
                break;
            case 70:
                pos =5;
                 printf("Used a snake to pos %d\n",pos);
                break; 
        }

    }
    printf("Current pos = %d  Turns = %d", pos,turns);
    return turns;
}

void main()
{


int turns= snake();

}