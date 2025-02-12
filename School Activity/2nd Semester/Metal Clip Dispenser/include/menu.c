#include "../lib/main.h"

void menU(Dispenser **head)
{
    system("CLS");
    Dispenser *tmp = *head;

    printf("Metal Dispenser #%d ", tmp->nth);
    printf("(Clips left: %d/5)\n\n", tmp->mag);
    printf("\e[1m== MENU ==\n\e[m");
    printf("(1) Go to another Dispenser\n");
    printf("(2) View Loaded Clips\n");
    printf("(3) Reload\n");
    printf("(4) Use\n");
    printf("(5) Terminate Program\n\n");
    printf("Choice? ");
}