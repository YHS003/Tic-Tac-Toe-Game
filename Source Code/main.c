/**
  *@file    : main.c
  *@author  : Yehya Hamdy Shehata
  *@date    : 15Mar24 5:00 PM
  *@version : 2.0.0
  */


/******************Header Files Section******************/
#include "TicTacToe.h"

/******************Functions Prototypes Section******************/

/**
  *@brief  : Function to print welcome board
  *@param  : void
  *@return : void
  */
void WelcomeBoard(void);

/**
  *@brief  : Function to tell user how to play
  *@param  : void
  *@return : void
  */
void HowToPlay(void);

/******************Global Variable Section******************/
char winner = ' ';
char response = ' ';
char flag = 0;

/******************Main Section******************/

int main()
{
    WelcomeBoard();

    GameMode();

    GetPlayersNames();

    HowToPlay();

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

        if(flag)
        {
            GameMode();

            if(1 == choice)
            {
                GetPlayersNames();
            }
            else
            {
                /*Nothing*/
            }
        }

        if(1 == choice)
        {
            TwoPlayerMode();
        }
        else
        {
            OnePlayerMode();
        }

        system("cls");
        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        scanf("%c"); // for clear buffer
        scanf("%c", &response);

        response = toupper(response);

        flag = 1;
    }
    while ('Y' == response);

    system("cls");
    printf("Thanks for playing.\nGood Bye\n");
    sleep(5);

    return 0;
}

/******************Function Definition Section******************/

/**
  *@brief  : Function to print welcome board
  *@param  : void
  *@return : void
  */
void WelcomeBoard(void)
{
    printf("Welcome To Tic Tac Toe Game...\n");
    sleep(5);
    system("cls");
}

/**
  *@brief  : Function to tell user how to play
  *@param  : void
  *@return : void
  */
void HowToPlay(void)
{
    printf("How To play?\n\n");
    printf("  1- For Playing Enter Number between 1 and 9\n");
    printf("  2- Each Number Acts a square in the board like this: \n\n");

    printf("   %c | %c | %c \n", '1', '2', '3');
    printf("  ---|---|---\n");
    printf("   %c | %c | %c \n", '4', '5', '6');
    printf("  ---|---|---\n");
    printf("   %c | %c | %c \n", '7', '8', '9');

    printf("\n\n  3- Player 1 is X and (Player 2)/(Computer) is O\n\n");

    printf("Have a good time and Enjoy with the Game :)\n");
    sleep(30);
}

/**
  *@brief  : Algorithm to Two Player Mode
  *@param  : void
  *@return : void
  */
void TwoPlayerMode(void)
{
    while((' ' == winner)  && (checkFreeSpaces()))
    {
        system("cls");
        printBoard();

        playerOneMove();
        winner = checkWinner();
        system("cls");
        printBoard();

        if((' ' != winner) || (!checkFreeSpaces()))
        {
            break;
        }

        playerTwoMove();
        winner = checkWinner();
        system("cls");
        printBoard();
        if((' ' != winner) || (!checkFreeSpaces()))
        {
            break;
        }
    }
}

/**
  *@brief  : Algorithm to One Player Mode
  *@param  : void
  *@return : void
  */
void OnePlayerMode(void)
{
    while((' ' == winner)  && (checkFreeSpaces()))
    {
        system("cls");
        printBoard();

        playerOneMove();
        winner = checkWinner();
        system("cls");
        printBoard();

        if((' ' != winner) || (!checkFreeSpaces()))
        {
            break;
        }

        computerMove();
        winner = checkWinner();
        system("cls");
        printBoard();
        if((' ' != winner) || (!checkFreeSpaces()))
        {
            break;
        }
    }
}
