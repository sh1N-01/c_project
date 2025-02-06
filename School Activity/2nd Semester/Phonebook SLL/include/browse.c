#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int browsE()
{
    if (head == NULL) {
        printf("\e[1mPhonebook is empty. \e[m");
        sleep(3);
        exit(clone());
    }

    Contact *temp = head;
    printf("\e[1m== BROWSE ==\n\n\e[m");
    printf("\e[1m%-20s %-15s\e[m\n", "NAME", "MOBILE#");

    while (temp != NULL)
    {
        printf("%-20s %d\n", temp->name, temp->mobile);
        temp = temp->next;
    }

    sleep(3);
    exit(clone());
}
