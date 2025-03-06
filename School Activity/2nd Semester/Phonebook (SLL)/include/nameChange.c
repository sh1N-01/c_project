#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include "../lib/main.h"

void nameChange(Record **head)
{
    char changeName[99];

    scanf("%s", changeName);

    Record *temp = *head;
    while(temp != NULL)
    {
        if(strcmp(temp->name, changeName) == 0)
        {
            printf("\nName %s found!", changeName);
            sleep(1);
            
            printf("\n\nEnter new name: ");
            scanf("%s", temp->name);

            browse1(head);
            printf("\nReplaced!\n");
            system("Pause");
            clone(head);
        }

        temp = temp->next;
    }
    
    printf("Name %s not found!\n", changeName);
    system("Pause");
    clone(head);
}

void nameChange1(Record **head)
{
    char changeName[99];

    scanf("%s", changeName);

    Record *temp = *head;
    Record *temp1 = NULL;
    while(temp != NULL)
    {
        if(strcmp(temp->name, changeName) == 0)
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

        temp1 = temp;
        temp = temp->next;
    }
    
    printf("Name %s not found!\n", changeName);
    system("Pause");
    clone(head);
}