#include<unistd.h>
#include<stdlib.h>
#include "../clone.c"
#include "../clone.h"
#include<time.h>

extern int pass, balance, g[999], i, j[999];
extern time_t h[999];

void deposit()
{
    int x, y;

    printf("\033[0;32mCurrent Balance: %d\n\033[0m", balance);
    printf("\nInput money to deposit: ");

    x = errorTrap1();

    printf("\nPIN: ");

    while(1)
    {
        if(scanf("%d", &y) == 1)
        {
            if(y == pass)
            {
                balance += x;
                g[i] = balance;
                j[i] = x;
                h[i] = time(NULL); 
                i++;

                printf("\n\033[0;32mNew Balance: %d\n", balance);
                
                printf("\nGoing back to menu...\033[0m");
                sleep(3);
                exit(cloNe());
            }

            else
            {
                printf("\n\033[0;31mIncorrect PIN. Try again. \033[0m");
                while(getchar() != '\n');
            }
        }

        else
        {
            printf("\n\033[0;31mInvalid input. Please enter a number. \033[0m");
            while(getchar() != '\n');
        }
    }
}