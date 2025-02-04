#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int changE()
{
    int mobile;
    printf("\e[1m== CHANGE ==\n\e[m");
    printf("Input Mobile no.: ");
    mobile = errorTrap1();

    Contact *temp = head;
    
    while (temp != NULL) 
    {
        if (temp->mobile == mobile) 
        {
            printf("Contact found: %s, Mobile: %d\n", temp->name, temp->mobile);
            sleep(3);

            printf("\nEnter new name: ");
            scanf("%s", temp->name);
            printf("Enter new mobile number: ");
            temp->mobile = errorTrap1();

            printf("Contact updated successfully!\n");
            sleep(3);
            exit(clone());
        }
        temp = temp->next;
    }

    printf("\e[1mERROR: \e[mContact not found. ");
    sleep(3);
    exit(clone());
}