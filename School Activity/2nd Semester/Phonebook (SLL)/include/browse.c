#include<stdlib.h>
#include "../lib/main.h"

void browse(Record **head)
{
    system("CLS");
    printf("== BROWSE ==\n\n");

    int number = 1;
    
    if(*head == NULL)
    {
        printf("Record is empty!\n");
        system("Pause");
        clone(head);
    }

    printf("Contact Record\n\n");

    Record *temp = *head;
    while(temp != NULL)
    {
        printf("%d. Name: %s\n", number, temp->name);
        printf("   Number: %d\n\n", temp->number);

        number++;
        temp = temp->next;
    }
    
    system("Pause");
    clone(head);
}

void browse1(Record **head)
{
    int number = 1;

    printf("Contact Record\n\n");

    Record *temp = *head;
    while(temp != NULL)
    {
        printf("%d. Name: %s\n", number, temp->name);
        printf("   Number: %d\n\n", temp->number);

        number++;
        temp = temp->next;
    }
}