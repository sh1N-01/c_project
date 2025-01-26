#include<unistd.h>

extern int pass, balance;

void balInqui()
{
    printf("Acount Owner: To be added in the future\n");
    printf("\n\033[0;32mAccount Balance: %d\n", balance);
    sleep(3);
    
    printf("\nGoing back to menu...\033[0m");
    sleep(3);
    exit(cloNe());
}