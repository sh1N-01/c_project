#include<unistd.h>

#include "../lib/main.h"

int viewLoad(Dispenser **head)
{
    system("CLS");

    Dispenser *tmp = *head;

    printf("Dispenser #%d\n", tmp->nth);
    printf("Loaded clips: %d/5\n", tmp->mag);
    printf("Loaded sizes: ");
    
    Mag *magTmp = tmp->content; 
    while(magTmp != NULL)
    {
        printf("%.1f ", magTmp->clipSize);
        magTmp = magTmp->next;
    }

    printf("\n\n");
    system("Pause");

    printf("\nReturning to menu...");
    sleep(3);
    exit(clonE());
}