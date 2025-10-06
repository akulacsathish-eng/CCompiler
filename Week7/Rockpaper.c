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

void choiceDecrypt(int ch)
{
    if(ch ==1)
        printf(" Rock!");
    else if (ch==2)
        printf(" paper");
    else if ( ch==3)
        printf(" Scissor");
    else
        printf(" Invalid choice");
}

int main()
{
    int  userCh,rch,userWin=0,CompWin=0,ties=0;

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

        printf("User plays");
        choiceDecrypt(userCh);

        printf("Computer plays");
        choiceDecrypt(comCh);
        printf("\n");

        if( result ==0 )
        {
            printf("Its a tie\n");
            ties++;
        }
        else if(result ==1)
        {
            printf("User wins\n");
            userWin++;
        }
        else    
        {
            printf("Computer wins\n");
            CompWin++;
        }

    }
    
   printf("=== Final Results ===\n");

    printf("You: %d  Computer: %d  Ties: %d",userWin,CompWin,ties);

  if(userWin>CompWin)
  {
    printf("\nUser wins the match!");
  }
  else if(CompWin>userWin)
  {
    printf("\nComputer wins the match!");
  }
  else
    printf("\nIts a tie super rare!");
}
