#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 13

int main(void)
{
    char password[PASSWORD_LENGTH];
    int i, sum = 0, diff;

    srand(time(0)); // Seed the random number generator with the current time

    // Generate random characters for the password
    for (i = 0; i < PASSWORD_LENGTH - 1; i++)
    {
        password[i] = rand() % 94 + 33; // Generate a random character between ASCII 33 ('!') and ASCII 126 ('~')
        sum += password[i];
    }

    diff = 2772 - sum;
    password[PASSWORD_LENGTH - 1] = diff;

    printf("%s\n", password);

    return 0;
}
