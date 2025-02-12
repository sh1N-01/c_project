#include<stdlib.h>
#include<unistd.h>

#include "../lib/main.h"

int usE(Dispenser **head)
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

    if(count == 0)
    {
        printf("You need to reload metal clips! ");
        sleep(2);
        clonE();
    }

    else
    {
        printf("How many would you like to use? ");
        x = loadTrap(count);

        for (int i = 0; i < x; i++)
        {
            if (tmp->content == NULL) 
            {
                break;
            }

            Mag *toDelete = tmp->content;
            tmp->content = tmp->content->next; 
            
            if (tmp->content != NULL)
            {
                tmp->content->prev = NULL;
            }

            free(toDelete);
        }

        tmp->mag -= x;

        printf("\nRemaining clips: %d ", tmp->mag);
        sleep(2);
        clonE();
    }
    
}