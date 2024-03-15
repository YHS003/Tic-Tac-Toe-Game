#include "TicTacToe.h"

int main()
{

    char winner = ' ';
    char response = ' ';

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

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
            y
            if((' ' != winner) || (!checkFreeSpaces()))
            {
                break;
            }
        }

        system("cls");
        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        scanf("%c"); // for clear buffer
        scanf("%c", &response);

        response = toupper(response);
    }
    while ('Y' == response);

    printf("Thanks for playing!");

    sleep(5);
    return 0;
}
