#include <stdlib.h>
#include <stdio.h>

int main()
{
    int secret = rand()%1000+1;
    printf("%d\n", secret);
    int guess = 0, count = 0;
    while(secret != guess && count < 10)
    {
        printf("Quelle est le numero entre 1 et 1000?\n");
        scanf("%d", &guess);
        if(guess == -1)
            break;
        if(guess == secret)
        {
            printf("Vous avez gagner!!!\n");
            break;
        }
        count++;
    };
    if(count == 10)
        printf("Vous avez perdu\n");
    return 0;
}