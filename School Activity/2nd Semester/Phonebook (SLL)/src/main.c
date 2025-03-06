/*
    Singly Linked List
    This project will apply the following:
    - Multiple File Type
    - Modularization
    - Pointers
    - Structs
    
    NOTE: Algorithms must be built as efficient as possible.
        - Keep variables private (DOnt use global variables)
        - Avoid unused variables
        - Best if functions are operations, and doesnt mix printing
*/

#include<stdio.h>
#include "../lib/main.h"
#include "../include/menu.c"
#include "../include/clone.c"
#include "../include/choices.c"
#include "../include/errorTrap.c"
#include "../include/create.c"
#include "../include/nameChange.c"
#include "../include/append.c"
#include "../include/browse.c"
#include "../include/change.c"
#include "../include/delete.c"
#include "../include/freeList.c"

int main()
{
    system("CLS");

    char choice;
    Record *head = NULL;

    menu();
    choice = errorTrap();
    choices(choice, &head);
}
