#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define X 1
#define O 2

int initializeBoard(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr[i][j] = 0;
        }
    }
}

char getsymbol(int value) {
    if(value == X) return 'X';
    else if(value == O) return 'O';
    else return ' ';
}

void printBoard(int arr[3][3]) {
    printf("\nCurrent Board:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf(" %c ", getsymbol(arr[i][j]));
            if(j < 2) printf("|");
        }
        printf("\n");
        if(i < 2) printf("---+---+---\n");
    }
}

int makemove(int board[3][3], int position, int playerSymbol) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    if(position < 1 || position > 9 || board[row][col] != 0) {
        return 0;
    }

    board[row][col] = playerSymbol;
    return 1;
}

int checkWinner(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != 0) 
            return arr[i][0];
    }

    for(int i = 0; i < 3; i++) {
        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != 0) 
            return arr[0][i];
    }

    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != 0)
        return arr[0][0];

    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != 0) 
        return arr[0][2];

    return 0;
}

int isBoardFull(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == 0) {
                return 0;
            }
        }
    }
    return 1;
}

void computerMove(int arr[3][3], int compSymbol) {
    int pos;

    do {
        pos = rand() % 9 + 1;
    } while(!makemove(arr, pos, compSymbol));
    printf("Computer places %c at position %d\n", getsymbol(compSymbol), pos);
}

void exitGame() {
    char choice;

    printf("Do you want to play again? (Y/N): ");
    while (getchar() != '\n');
    scanf(" %c", &choice);

    if(choice == 'N' || choice == 'n') {
        printf("Thanks for playing!\n");
        exit(0);
    }
}


int main () {

    int arr[3][3];
    char name[20];
    int choice, pos;
    int playerSymbol, compSymbol;
    int currentPlayer;
    int winner;

    srand(time(NULL));

    while(1) {
        initializeBoard(arr);
        winner = 0;

        int c;
        while ((c = getchar() != '\n' && c != EOF));

        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
    
        printf("Welcome %s! Let's play Tic-Tac-Toe!\n", name);
        printf("What do you want to choose?\n");
        printf("1. 'X'\n2. 'O' (Enter 1 or 2): ");
        scanf("%d", &choice);

        while (getchar() != '\n');
    
        if(choice == 1) {
            playerSymbol = X;
            compSymbol = O;
            printf("\n%s chooses X. Computer is O.\n", name);
        } else if(choice == 2) {
            playerSymbol = O;
            compSymbol = X;
            printf("\n%s chooses O. Computer is X.\n", name);
        } else {
            printf("Invalid choice. Please enter 1 or 2. Exiting.\n");
            return 1;
        }

        int firstPlayerRandom = rand() % 2 + 1;
        if(firstPlayerRandom == 1) {
            printf("\n%s starts the game.\n", name);
            currentPlayer = playerSymbol;
        } else {
            printf("\nComputer starts the game.\n");
            currentPlayer = compSymbol;
        }
    
        for(int turn = 0; turn < 9; turn++) {
            printBoard(arr);

            if(currentPlayer == playerSymbol) {
                int moveSuccesfull = 0;
                do {
                    printf("Enter the position (1-9) to place %c: ", getsymbol(playerSymbol));
                    scanf("%d", &pos);

                    while (getchar() != '\n');

                    moveSuccesfull = makemove(arr, pos, playerSymbol);
                    if(!moveSuccesfull) {
                        printf("Invalid move. Position %d is already taken or out of bounds. Please try again.\n", pos);
                    }
                } while (!moveSuccesfull);
            } else {
                computerMove(arr, compSymbol);
            }
            
            winner = checkWinner(arr);
            if(winner != 0) {
                printBoard(arr);
                if(winner == playerSymbol) {
                    printf("\nCongratulations %s! You win!\n", name);
                } else {
                    printf("Computer wins! Better luck next time.\n");
                }
                break;
            }

            if(isBoardFull(arr)) {
                printBoard(arr);
                printf("\nIt's a draw!\n");
                break;
            }
            currentPlayer = (currentPlayer == playerSymbol) ? compSymbol : playerSymbol;
        }
        exitGame();
    }
    return 0;
}