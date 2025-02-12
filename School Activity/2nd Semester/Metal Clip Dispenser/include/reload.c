#include<stdlib.h>
#include<unistd.h>

#include "../lib/main.h"

int reloaD(Dispenser **head)
{
    system("CLS");

    int x;
    int count = 0;
    Dispenser *tmp = *head;
    Mag *magTmp = tmp->content;

    while(magTmp != NULL)
    {
        magTmp = magTmp->next;
        count++;
    }

    if(count == 5)
    {
        printf("You don't need to reload! ");
        sleep(2);
        clonE();
    }

    else
    {
        printf("Current Clip count: %d\n", count);
        printf("Reload: ");
        x = reloadTrap(count);

        Mag *lastMag = tmp->content;
        if (lastMag != NULL) 
        {
            while (lastMag->next != NULL) 
            {
                lastMag = lastMag->next;
            }
        }

        for (int i = 1; i <= x; i++)
        {
            Mag *newMag = (Mag *)malloc(sizeof(Mag));

            printf("\nSize for magazine %d?\n\n", i);
            sizE();
            newMag->clipSize = sizeCatch();

            newMag->next = NULL;
            newMag->prev = lastMag;

            if (lastMag == NULL) 
            {
                tmp->content = newMag;
            } 
            else 
            {
                lastMag->next = newMag;
            }

            lastMag = newMag;  
        }

        tmp->mag += x;

        printf("\nReload complete! Current clips: %d\n", tmp->mag);
        sleep(2);
        clonE();
    }
}