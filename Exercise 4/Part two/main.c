/*
 * Programmer: Shayan Mansornia     Date:11/23/2021
 * Instructor: Seyyed Amir Hadi Minoofam
 * Term 1
 * (Rock Paper scissors game 1v1)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }

    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("\n\t*** Welcome to the Rock Paper Scissors game ***\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter (1) for Rock, Enter (2) for Paper, Enter (3) for Scissors\n\n");
        printf("\tPlayer's turn, plaese choose your move: ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("\t        You choose: %c \n", playerChar);



        printf("\t\n\nit's now computer's turn\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf(" Computer choose: %c \n\n", compChar);


        if (greater(compChar, playerChar) == 1)
        {
            compScore++;
            printf(" *******************\n");
            printf("    Computer Win!\n");
            printf(" *******************\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore++;
            playerScore++;
            printf(" *************************************\n");
            printf("   It's a draw. Both got 1 point!\n");
            printf(" *************************************\n\n");
        }
        else
        {
            playerScore++;
            printf(" *******************\n");
            printf("     You Win!\n");
            printf(" *******************\n\n");
        }

        printf(" \nYou: %d      ", playerScore);
        printf(" \nComputer: %d \n", compScore);

    }


    printf("\n    **Final Score**   \n");
    printf("\n  you: %d  |   computer: %d    \n\n", playerScore, compScore);



    if (playerScore > compScore)
    {
        printf(" \t*************************************\n");
        printf("\t       You Win the match \a\n");
        printf(" \t*************************************\n");
    }
    else if (playerScore < compScore)
    {
        printf(" \t*************************************\n");
        printf("\t      Computer Win the match \a\n");
        printf(" \t*************************************\n");
    }
    else
    {
        printf(" \t*************************************\n");
        printf("\t          It's a draw \a\n");
        printf("\t *************************************\n");
    }

    return 0;
}
