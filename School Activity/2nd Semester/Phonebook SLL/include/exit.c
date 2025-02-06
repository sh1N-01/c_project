#include<unistd.h>
#include<stdlib.h>

void ext()
{
    printf("\nExiting Program...");
    sleep(2);
    fflush(stdin);
    system("Exit");
}