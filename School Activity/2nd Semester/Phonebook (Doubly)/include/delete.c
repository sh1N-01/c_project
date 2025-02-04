int deletE(Contact **head)
{
    int mobile;
    printf("\e[1m== DELETE ==\n\e[m");
    printf("Input Mobile no.: ");
    scanf("%d", &mobile);

    Contact *temp = *head;
    Contact *temp1 = NULL;

    while (temp != NULL)
    {
        if (temp->mobile == mobile)
        {
            if (temp1 == NULL)
            {
                *head = temp->next; 

                if(*head != NULL)
                {
                    (*head)->prev = NULL;
                }
            }

            else
            {
                temp1->next = temp->next;

                if(temp->next != NULL)
                {
                    temp->next->prev = temp1;
                }
            }

            free(temp);
            printf("Contact deleted successfully!\n");
            sleep(3);
            exit(clone());
        }

        temp1 = temp;
        temp = temp->next;
    }

    printf("Contact not found!\n");
    sleep(3);
    exit(clone());
}
