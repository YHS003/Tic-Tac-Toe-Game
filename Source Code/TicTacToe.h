#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
  *@brief  : Function to reset board
  *@param  : void
  *@return : void
  */
void resetBoard();

/**
  *@brief  : Function to print board
  *@param  : void
  *@return : void
  */
void printBoard();

/**
  *@brief  : Function to check if there is free spaces
  *@param  : void
  *@return : number of free spaces
  */
char checkFreeSpaces();

/**
  *@brief  : Function to get player one moving
  *@param  : void
  *@return : void
  */
void playerOneMove();

/**
  *@brief  : Function to get player two moving
  *@param  : void
  *@return : void
  */
void playerTwoMove();

/**
  *@brief  : Function to check if there is a winner
  *@param  : void
  *@return : the winner
  */
char checkWinner();

/**
  *@brief  : Function to print the winner player
  *@param  : void
  *@return : void
  */
void printWinner(char);

#endif // TIC_TAC_TOE_H
