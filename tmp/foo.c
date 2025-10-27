#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));

    int secret_number = rand() % 100 + 1; // [1..100]
    int tries = 0;
    do {
        int guess = 0;
        printf("Guess the number from 1 to 100: ");
        scanf("%d", &guess);
        tries++;
    } (while guess != secret_number);
    printf("You guessed the secret number after %d tries\n", tries);

    return 0;
}