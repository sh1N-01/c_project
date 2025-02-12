#include "../lib/main.h"

void choicE(int *n)
{
    switch(*n)
    {
        case 1:
            printf("\nLoading...");
            sleep(2);
            traversE(&head);
            break;
        case 2:
            printf("\nLoading...");
            sleep(2);
            viewLoad(&head);
            break;
        case 3:
            printf("\nLoading...");
            sleep(2);
            reloaD(&head);
            break;
        case 4:
            printf("\nLoading...");
            sleep(2);
            usE(&head);
            break;
        case 5:
            ext(&head);
            break;
    }
}

void sizE()
{
    printf("1.) 1.0\n");
    printf("2.) 1.5\n");
    printf("3.) 3.0\n\n");
    printf("Choice? ");
}