#include<stdlib.h>
#include "../lib/main.h"

void delete(Record **head, int toDelete)
{
    int dupe = 0;
    
    if(*head == NULL)
    {
        printf("Record is empty!\n");
        system("Pause");
        clone(head);
    }
    
    Record *temp = *head;
    Record *temp1 = NULL;

    while(temp != NULL)
    {
        if(temp->number == toDelete)
        {
            dupe++;
        }
        temp = temp->next;
    }

    temp = *head;
    while(temp != NULL)
    {
        if(temp->number == toDelete)
        {
            if(dupe <= 1)
            {
                if(temp1 == NULL)
                {
                    *head = temp;
                }

                else
                {
                    temp1->next = temp->next;
                }

                free(temp);
                printf("\nRecord deleted!\n");
                system("Pause");
                clone(head);
            }

            else
            {
                printf("#%d has %d duplicates. Enter name: ", toDelete, dupe);
                nameChange1(head);
            }
        }
        
        temp1 = temp;
        temp = temp->next;
    }
}