#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {

    char name[20];
    int choice, point = 0, random;

    srand(time(NULL));

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Welcome %s! Let's play Rock, Paper, Scissors!\n", name);

    for(int i = 1; i <= 3; i++) {
        printf("\nRound %d:\n", i);
        printf("Choose:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice < 1 || choice > 3) {
            printf("Invalid choice! Please choose 1, 2, or 3.\n");
            i--;
            continue;
        }

        if(choice == ROCK) printf("You(%s) chose Rock.\n", name);
        else if(choice == PAPER) printf("You(%s) chose Paper.\n", name);
        else printf("You(%s) chose Scissors.\n", name);

        random = rand() % 3 + 1;
        if(random == ROCK) printf("Computer chose Rock.\n");
        else if(random == PAPER) printf("Computer chose Paper.\n");
        else printf("Computer chose Scissors.\n");

        if(choice == random) {
            printf("It's a tie!\n");
        } else if((choice == ROCK && random == SCISSORS) || (choice == PAPER && random == ROCK) || (choice == SCISSORS && random == PAPER)) {
            printf("You win this round!\n");
            point++;
        } else {
            printf("Computer wins this round!\n");
        }

        printf("Current score: %d\n", point);
    }

    printf("\nFinal Points: %d\n", point);
    if (point > 0) {
        printf("Congratulations %s! You won the game!\n", name);
    } else if (point < 0) {
        printf("Better luck next time, %s!\n", name);
    } else {
        printf("It's a tie game, %s!\n", name);
    }
    printf("Thank you for playing!\n");

    return 0;
}