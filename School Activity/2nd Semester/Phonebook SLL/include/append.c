#include<stdlib.h>
#include<unistd.h>

#include "../src/clone.c"

int appenD() 
{
    Contact *newContact = (Contact *)malloc(sizeof(Contact));
    if (newContact == NULL) {
        printf("Memory allocation failed!\n");
        sleep(3);
        exit(clone());;
    }

    printf("Enter name: ");
    scanf("%s", newContact->name);
    
    printf("Enter mobile number: ");
    newContact->mobile = errorTrap1();

    newContact->next = NULL;

    if (head == NULL) 
    {
        head = newContact;
    } 
    
    else 
    {
        
        Contact *temp = head;

        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newContact;
    }

    printf("\nContact added successfully! ");
    sleep(3);
    exit(clone());
}