#include<stdlib.h>
#include<unistd.h>

#include "../lib/main.h"

void freeList(Record **head)
{
    if(*head == NULL)
    {
        printf("There's nothing in here.");
        sleep(2);
        exit(1);
    }

    else
    {
        Record *temp = *head;
        while(temp != NULL)
        {
            free(temp);
            temp = temp->next;
        }

        printf("\nRecord emptied.");
        sleep(2);
        exit(1);
    }
    
}