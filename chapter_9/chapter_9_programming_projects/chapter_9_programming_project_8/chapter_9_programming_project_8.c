
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>


int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(time(NULL));

    int wins = 0, loss = 0;

    for (;;) {
        bool game_res = play_game();
        if (game_res)
            wins++;
        else loss++;

        printf("\nPlay again? ");
        char c;
        while (1) { 
            c = tolower(getchar());
            if (c == '\n')
                continue;
            if (c != 'y' && c != 'n') 
                printf("Invalid (y/n)\n");
            else break;
        } 
        if (c == 'y')
            continue;
        else if (c == 'n')
            break;
    }
    printf("Wins: %2d Losses: %2d\n", wins, loss);
    return 0;    
}

int roll_dice(void) {
    // returns the sum of 2 a roll of 2, 6-sided die

    return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}

bool play_game(void) {
    // returns true (win) or false (loss)
    int set_point;

    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11) {
        printf("You win!\n");
        return true;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        printf("You lose!\n");
        return false;
    }
    else {
        set_point = roll;
        printf("Your point is: %d\n", set_point);
    }

    do {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == set_point) {
            printf("You win!\n");
            return true;
    }
    } while (roll != 7);
    printf("You lose!\n");
    return false;



}