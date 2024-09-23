#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)

{
    int score['Z' - 'A' + 1] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char wordPlayer1[100], wordPlayer2[100];

    printf("Player 1: ");
    scanf("%s", wordPlayer1);
    printf("Player 2: ");
    scanf("%s", wordPlayer2);

    int scorePlayer1 = 0, scorePlayer2 = 0;
    for (int i = 0; wordPlayer1[i] != '\0'; i++)
    {
        scorePlayer1 += score[toupper(wordPlayer1[i]) - 'A'];
    }

    for (int i = 0; wordPlayer2[i] != '\0'; i++)
    {
        scorePlayer2 += score[toupper(wordPlayer2[i]) - 'A'];
    }

    if (scorePlayer1 > scorePlayer2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scorePlayer2 > scorePlayer1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}