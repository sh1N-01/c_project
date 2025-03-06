#include "../lib/main.h"

void choices(char choice, Record **head)
{
    switch(choice)
    {
        case 'A':
        case 'a':
            appendMenu(head);
            break;
        case 'B':
        case 'b':
            browse(head);
            break;
        case 'C':
        case 'c':
            changeMenu(head);
            break;
        case 'D':
        case 'd':
            deleteMenu(head);
            break;
        case 'E':
        case 'e':
            freeList(head);
            break;
    }
}