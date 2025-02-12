#include "../lib/main.h"

void ext(Dispenser **head)
{
    Dispenser *tmp = *head;
    Mag *magTmp = tmp->content;

    while(magTmp != NULL)
    {
        free(magTmp);
        magTmp = magTmp->next;
    }

    while(tmp != NULL)
    {
        free(tmp);
        tmp = tmp->next;
    }

    printf("\nTerminating Program...");
    sleep(2);
    system("Exit");
}