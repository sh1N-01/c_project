#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

#include "displayMenu.c"
#include "displayMenu.h"
#include "interOperations.c"
#include "interOperations.h"

void choIce(int x);

int main()
{
    int x;

    displayMenu();
    x = errorTrap();
    choIce(x);
}

void choIce(int x)
{
    switch(x)
    {
        case 1:
            system("CLS");
            adD();
            break;

        case 2:
            system("CLS");
            suB();
            break;

        case 3:
            system("CLS");
            mulT();
            break;

        case 4:
            system("CLS");
            diV();
            break;

        case 5:
            printf("\nExiting program...");
            sleep(3);
            break;
    }
}
