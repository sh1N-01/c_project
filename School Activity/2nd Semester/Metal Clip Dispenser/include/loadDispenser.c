#include<stdlib.h>

#include "../lib/main.h"

int loadDispenser(Dispenser **head)
{
    system("CLS");
    
    int n;

    printf("How many dispensers would you like to create? ");
    n = errorTrap1();

    Dispenser *lastD = NULL;

    for(int i = 1; i <= n; i++)
    {
        Dispenser *newDispenser = (Dispenser *)malloc(sizeof(Dispenser));

        newDispenser->nth = i;
        newDispenser->mag = 5;

        newDispenser->prev = lastD;
        newDispenser->content = NULL;
        newDispenser->next = NULL;

        Mag *lastMag = NULL;
        for(int j = 1; j <= 5; j++)
        {
            Mag *newMag = (Mag *)malloc(sizeof(Mag));

            newMag->clipSize = 1.5;
            newMag->next = NULL;
            newMag->prev = lastMag;

            if (newDispenser->content == NULL) 
            {
                newDispenser->content = newMag;
            } 
            
            else 
            {
                lastMag->next = newMag;
            }
            
            lastMag = newMag;
        }

        if (*head == NULL)
        {
            *head = newDispenser;
        }
        else
        {
            lastD->next = newDispenser; 
        }

        lastD = newDispenser;
    }
}