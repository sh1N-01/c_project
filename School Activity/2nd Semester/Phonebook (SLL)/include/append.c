#include<stdlib.h>
#include "../lib/main.h"

void append(Record **head, Record *newRecord)
{
    if(*head == NULL)
    {
        *head = newRecord;
    }

    else
    {
        Record *temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newRecord; 
    }
}