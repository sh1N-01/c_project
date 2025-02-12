#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include "../include/errorTrap.c"
#include "../include/exit.c"
#include "../include/menu.c"
#include "../include/choice.c"
#include "../include/loadDispenser.c"
#include "../include/traversing.c"
#include "../include/loaded.c"
#include "../include/reload.c"
#include "../include/use.c"
#include "clone.c"

void main()
{
    int n;

    loadDispenser(&head);

    menU(&head);
    n = errorTrap();
    choicE(&n);
}