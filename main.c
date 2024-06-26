#include<stdlib.h>
#include<stdio.h>
#include"header/function.h"

int main()
{
    extern int board[];
    int key;
    int turn = X;
    while(1)
    {
        REFRESH; //system("cls");
        draw(board); //draw tic tac toe board
        Winner(&key); //Check if one of the players won
        if(key == 99)
        {
            break;
        }

        if(turn == X)
        {
            printf("X\n"); //tell which turn it is
            key = select(); 
            if(board[key] == EMPTY)
            {
                board[key] = X;
                turn = O;
            }
            else
            {
                continue;
            }
        }
        else if(turn == O)
        {
            printf("O\n");
            key = select();
            if(board[key] == EMPTY)
            {
                board[key] = O;
                turn = X;
            }
            else
            {
                continue; //I'm having a doubt
            }
        }
    }
    return 0;
}
