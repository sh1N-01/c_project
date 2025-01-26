#include<time.h>

extern int pass, balance, i, j[999], k[999];
extern time_t h[999];

void trnscHstry()
{
    int i, max;
    max = 999;

    printf("\033[0;32mTransaction History\nOnly Deposit and Withdrawal!\n\n");

    printf("\033[0mCurrent Account Balance: %d\n\n", balance);

    for(i = 1; i < max; i++)
    {
        if(j[i] == 0 && k[i] == 0)
        {
            break;
        }

        char *timeString = ctime(&h[i]);
        timeString[strcspn(timeString, "\n")] = 0;
        
        if(j[i] > k[i])
        {
            sleep(1);
            printf("%-30s\033[0;32m+%d\t%d\n\033[0m", timeString, j[i], g[i]);
        }

        else
        {
            sleep(1);
            printf("%-30s\033[0;31m-%d\t%d\n\033[0m", timeString, k[i], g[i]);
        }
    }

    sleep(3);
    printf("\nGoing back to menu...");
    sleep(3);
    exit(cloNe());
}