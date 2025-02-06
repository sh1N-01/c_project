/*Phonebook using Singly Linked List*/
#include <stdio.h>
#include <ctype.h>

#include "../lib/main.h"

#include "../include/errorTrap.c"
#include "../include/menu.c"
#include "../include/exit.c"
#include "../include/append.c"
#include "../include/browse.c"
#include "../include/change.c"
#include "../include/delete.c"

void choicE(char x);

void main()
{
    char x;

    menU();
    x = errorTrap();
    choicE(x);
}

void choicE(char x)
{
    switch(x)
    {
        case 'A':
        case 'a':
            system("CLS");
            appenD();
            break;
        case 'B':
        case 'b':
            system("CLS");
            browsE();
            break;
        case 'C':
        case 'c':
            system("CLS");
            changE();
            break;
        case 'D':
        case 'd':
            system("CLS");
            deletE(&head);
            break;
        case 'E':
        case 'e':
            ext();
            break;
        default:
            printf("Input not valid!");
            sleep(2);
            clone();

    }
}
