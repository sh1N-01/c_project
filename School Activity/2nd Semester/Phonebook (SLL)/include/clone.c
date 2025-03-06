#include<stdio.h>
#include "../lib/main.h"

int clone(Record **head)
{
    system("CLS");
    fflush(stdin);

    char choice;

    menu();
    choice = errorTrap();
    choices(choice, head);
}