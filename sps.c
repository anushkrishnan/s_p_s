#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Here we can give it 0 as stone, 1 as paper, 2 as scissor, 0 as end
    int client_move , computer_move;

    while (1)
    {
        printf("The Stone-Paper & Scissor Game Choices for you: \n  \t 0. stone \t 1. paper \t 2.scissor \t 9. exit \n");
        printf("enter your choice: ");
        scanf("%d",&client_move); /*The variable for storing the the element that is selected by the user !!*/
        /*Now we want the computer's move so we can use the rand function for getting the random selection done by the computer & the rand fuction comes under the stdlib header section*/
        computer_move = rand() % 3; /*The 3 act as the ending digit and the limit for the random variable that is to be selected by the computer*/

        /*Now we can check whether the user wants to enter the game or not ?*/

        if(client_move == 9)
        {
            exit(1);
        }
        /*now lets do the else if condition for the each and every selection done by the user*/
        else if(client_move == 0 && computer_move == 0)
        {
            printf("The Player's choice is stone, Computer's choice is stone \n");
            printf(" SHOOT......Its a tie \n \n");           /*  case1- the user selects the stone and the computer selects the stone also ie its a tie*/
        }
        else if(client_move == 1 && computer_move == 0)
        {
            printf("The Player's choice is paper, Computer's choice is stone \n");
            printf("You DEFEATED the Computer !!! \n\n");     /*  case2 - The user selects the paper and the computer selects the stone*/
        }
        else if(client_move == 2  && computer_move == 0)
        {
            printf("The Player's choice is scissor, Computer's choice is stone \n");
            printf(" Computer DEFEATED you !!! \n\n  ");      /* case3 - The user selects the scissor option and the computer selects the stone as the selection*/
        }
        else if(client_move == 0 && computer_move == 1)
        {
            printf("The Player's choice is stone, Computer's choice is paper \n");
            printf(" Computer DEFEATED you !!! \n \n");
        }
        else if(client_move == 1 && computer_move == 1)
        {
            printf("The Player's choice is paper, Computer's choice is paper \n");
            printf(" SHOOT......Its a tie !!! \n \n");
        }
        else if(client_move == 2 && computer_move == 1)
        {
            printf("The Player's choice is scissor, Computer's choice is paper \n");
            printf(" You DEFEATED the Computer !!!\n \n ");
        }
        else if(client_move == 0 && computer_move == 2)
        {
            printf("The Player's choice is stone, Computer's choice is scissor \n");
            printf(" You DEFEATED the Computer !!! \n \n ");
        }
        else if(client_move == 1 && computer_move == 2)
        {
            printf("The Player's choice is paper, Computer's choice is scissor \n");
            printf(" Computer DEFEATED you !!! \n\n ");
        }
        else if(client_move == 2 && computer_move == 2)
        {
            printf("The Player's choice is scissor, Computer's choice is scissor \n");
            printf(" SHOOT......Its a tie !!! \n\n ");
        }
    }
    return 0;
}