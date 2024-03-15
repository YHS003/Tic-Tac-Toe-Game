#include "TicTacToe.h"

static char board[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'};
static const char PLAYER_ONE = 'X';
static const char PLAYER_TWO = 'O';

/**
  *@brief  : Function to reset board
  *@param  : void
  *@return : void
  */
void resetBoard()
{
    for(char reset = 0; reset < 9; reset++)
    {
        board[reset] = ' ';
    }
}

/**
  *@brief  : Function to print board
  *@param  : void
  *@return : void
  */
void printBoard()
{
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

/**
  *@brief  : Function to check if there is free spaces
  *@param  : void
  *@return : number of free spaces
  */
char checkFreeSpaces()
{
    char freeSpaces = 9;

    for(char reset = 0; reset < 9; reset++)
    {
            if(board[reset] != ' ')
            {
                freeSpaces--;
            }
            else
            {
                /*Nothing*/
            }
    }

    return freeSpaces;
}

/**
  *@brief  : Function to get player one moving
  *@param  : void
  *@return : void
  */
void playerOneMove()
{
    int place;

    do
    {
        printf("Player 1 turn: ");
        fflush(stdin);
        scanf("%i", &place);
    }
    while((1 > place) || (9 < place) || (board[place - 1] != ' '));

    switch (place)
    {
    case 1:
        board[0] = PLAYER_ONE;
        break;
    case 2:
        board[1] = PLAYER_ONE;
        break;
    case 3:
        board[2] = PLAYER_ONE;
        break;
    case 4:
        board[3] = PLAYER_ONE;
        break;
    case 5:
        board[4] = PLAYER_ONE;
        break;
    case 6:
        board[5] = PLAYER_ONE;
        break;
    case 7:
        board[6] = PLAYER_ONE;
        break;
    case 8:
        board[7] = PLAYER_ONE;
        break;
    case 9:
        board[8] = PLAYER_ONE;
        break;
    }
}

/**
  *@brief  : Function to get player two moving
  *@param  : void
  *@return : void
  */
void playerTwoMove()
{
    int place;

    do
    {
        printf("Player 2 turn: ");
        fflush(stdin);
        scanf("%i", &place);
    }
    while((1 > place) || (9 < place) || (board[place - 1] != ' '));

    switch (place)
    {
    case 1:
        board[0] = PLAYER_TWO;
        break;
    case 2:
        board[1] = PLAYER_TWO;
        break;
    case 3:
        board[2] = PLAYER_TWO;
        break;
    case 4:
        board[3] = PLAYER_TWO;
        break;
    case 5:
        board[4] = PLAYER_TWO;
        break;
    case 6:
        board[5] = PLAYER_TWO;
        break;
    case 7:
        board[6] = PLAYER_TWO;
        break;
    case 8:
        board[7] = PLAYER_TWO;
        break;
    case 9:
        board[8] = PLAYER_TWO;
        break;
    }
}

/**
  *@brief  : Function to check if there is a winner
  *@param  : void
  *@return : the winner
  */
char checkWinner()
{
    //check columns
    for(int columns = 0; columns < 3; columns++)
    {
        if((board[columns] == board[columns + 3]) && (board[columns] == board[columns + 6]) && (' ' != board[columns]))
        {
            return board[columns];
        }
    }
    //check rows
    if((board[0] == board[1]) && (board[1] == board[2]) && (' ' != board[0]))
    {
        return board[0];
    }

    if((board[3] == board[4]) && (board[4] == board[5]) && (' ' != board[3]))
    {
        return board[3];
    }

    if((board[6] == board[7]) && (board[7] == board[8]) && (' ' != board[6]))
    {
        return board[6];
    }
    //check diagonals
    if((board[0] == board[4]) && (board[4] == board[8]) && (' ' != board[0]))
    {
        return board[0];
    }

    if((board[2] == board[4]) && (board[4] == board[6])  && (' ' != board[2]))
    {
        return board[2];
    }

    return ' ';
}

/**
  *@brief  : Function to print the winner player
  *@param  : (winner)
  *@return : void
  */
void printWinner(char winner)
{
    if(PLAYER_ONE == winner)
    {
        printf("Player 1 win\n");
    }
    else if(PLAYER_TWO == winner)
    {
        printf("Player 2 win\n");
    }
    else
    {
        printf("It's TIE!!!\n");
    }
}
