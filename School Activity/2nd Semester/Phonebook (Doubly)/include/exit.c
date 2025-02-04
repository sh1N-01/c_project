#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ext()
{
    Contact *temp = head;

    printf("\nExiting Program...");

    while(temp != NULL)
    {
        free(temp);
        temp = temp->next;
    }

    sleep(2);
    fflush(stdin);
    system("Exit");
}