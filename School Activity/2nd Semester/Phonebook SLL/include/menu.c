#include<stdlib.h>

void menU()
{
    system("CLS");
    
    printf("\e[1m== MENU ==\n\e[m");
    printf("[A] Append Record\n");
    printf("[B] Browse Record\n");
    printf("[C] Change Record\n");
    printf("[D] Delete Record\n");
    printf("[E] Exit\n");
    printf("\nChoice? ");
}