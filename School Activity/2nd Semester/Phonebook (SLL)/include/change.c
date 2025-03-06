#include<stdlib.h>
#include<unistd.h>
#include "../lib/main.h"

void change(Record **head, int *replaceNum)
{
    int duplicate = 0, duplicated = 0;

    if(*head == NULL)
    {
        printf("Record is empty!\n");
        system("Pause");
        clone(head);
    }
    
    Record *temp = *head;
    while(temp != NULL)
    {
        if(*replaceNum == temp->number)
        {
            duplicate++;
            duplicated = *replaceNum;
        }
        temp = temp->next;
    }

    temp = *head;
    while(temp != NULL)
    {
        if(temp->number == *replaceNum)
        {
            if(duplicate > 1)
            {
                printf("\n%d duplicates exists for Number %d. Enter name: ", duplicate, duplicated);
                nameChange(head);
                
            }

            printf("Number %d found!", *replaceNum);
            sleep(1);
            
            printf("\n\nEnter new number: ");
            temp->number = errorTrap1(replaceNum);

            browse1(head);
            printf("\nReplaced!\n");
            system("Pause");
            clone(head);
        }
        temp = temp->next;
    }

    printf("Number %d not found!\n", *replaceNum);
    system("Pause");
    clone(head);
}