#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *hint(int secretNumber, int guessedNumber)
{
    int difference = abs(secretNumber - guessedNumber);
    char *hint;

    if (difference == 1 || difference == 2 || difference == 3)
    {
        hint = malloc(sizeof(char) * 4);
        strcpy(hint, "hot");
    }
    else if (difference == 4 || difference == 5 || difference == 6)
    {
        hint = malloc(sizeof(char) * 5);
        strcpy(hint, "warm");
    }
    else if (difference == 7 || difference == 8 || difference == 9)
    {
        hint = malloc(sizeof(char) * 5);
        strcpy(hint, "cold");
    }
    else
    {
        hint = malloc(sizeof(char) * 9);
        strcpy(hint, "freezing");
    }

    return hint;
}

int main()
{
    srand(time(NULL));
    int secretNumber = rand() % 11 + 10;
    int guessedNumber = 0;
    int numberOfTries = 0;
    int maxNumberOfTries = 5;

    while (guessedNumber != secretNumber)
    {
        printf("%d tries left, guess a number: ", maxNumberOfTries - numberOfTries);
        scanf(" %d", &guessedNumber);

        if (guessedNumber == secretNumber)
        {
            printf("good work, it took you %d tries\n", numberOfTries + 1);
            break;
        }
        else if (numberOfTries == maxNumberOfTries - 1)
        {
            printf("faild, the number was %d", secretNumber);
            break;
        }
        printf("you are %s\n", hint(secretNumber, guessedNumber));
        numberOfTries++;
    }

    return 0;
}
