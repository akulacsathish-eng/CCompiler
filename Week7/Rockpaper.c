#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 1 - Rock, 2-Paper & 3 - scissors
int getComputerChoice() 
{
    return (rand()%3)+1;
}

int decideWinner(int playerChoice, int computerChoice) 
{

    // Capture scenario for tie
    if(playerChoice==computerChoice)
        return 0;
    // Capture all scenarios for win
    if((playerChoice ==1 && computerChoice == 3) || (playerChoice ==2 && computerChoice == 1)||(playerChoice ==3 && computerChoice == 1))
        return 1;
    //loss scenario
    return -1;
}


int main()
{
    int  userCh,rch;

    do
    {
    
        printf("Enter number of rounds 5 or 10:");
        scanf("%d",&rch);

    } while (rch != 5 && rch !=10);

    for(int i=0;i<rch;i++)
    {
        printf("1. Rock 2.Paper 3. scissors \n");
        printf("Enter users choice");
        scanf("%d",&userCh);

        int comCh = getComputerChoice();

        int result = decideWinner(userCh,comCh);

    }
    
  
}
