int deletE(Contact **head)
{
    int mobile;
    printf("\e[1m== DELETE ==\n\e[m");
    printf("Input Mobile no.: ");
    scanf("%d", &mobile);

    Contact *temp = *head;
    Contact *prev = NULL;

    while (temp != NULL)
    {
        if (temp->mobile == mobile)
        {
            if (prev == NULL)
            {
                *head = temp->next; 
            }

            else
            {
                prev->next = temp->next;
            }

            free(temp);
            printf("Contact deleted successfully!\n");
            sleep(3);
            exit(clone());
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Contact not found!\n");
    sleep(3);
    exit(clone());
}
