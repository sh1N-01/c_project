#include<stdlib.h>
#include<unistd.h>

#include "../lib/main.h"

int traversE(Dispenser **head)
{
    system("CLS");

    int choice;
    int count = 0;

    Dispenser *tmp = *head;

    while (tmp->prev != NULL)  
    {
        tmp = tmp->prev;
    }

    Dispenser *firstNode = tmp;
    tmp = firstNode;

    while(tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }

    printf("Available Dispensers: %d\n\n", count);
    printf("Go to? (1-%d): ", count);
    choice = errorTrap2(count);

    tmp = firstNode;
    
    while(tmp != NULL)
    {
        if(tmp->nth == choice)
        {
            *head = tmp;

            printf("Success! Returning to menu...");
            sleep(2);
            exit(clonE());
        }

        tmp = tmp->next;
    }
}