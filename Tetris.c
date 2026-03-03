#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10

int board[HEIGHT][WIDTH];

void initBoard() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            board[i][j] = 0;
        }
    }
}

void printBoard() {
    system("clear"); // no Windows pode usar "cls"
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            if(board[i][j] == 1)
                printf("[]");
            else
                printf(" .");
        }
        printf("\n");
    }
}

int main() {
    int pieceX = WIDTH / 2;
    int pieceY = 0;

    initBoard();

    while(pieceY < HEIGHT) {
        board[pieceY][pieceX] = 1;
        printBoard();

        board[pieceY][pieceX] = 0;

        pieceY++;

        printf("\nPressione Enter para descer...");
        getchar();
    }

    printf("\nGame Over!\n");
    return 0;
}