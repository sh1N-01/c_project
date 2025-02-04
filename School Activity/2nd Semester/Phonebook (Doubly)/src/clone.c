#include<stdio.h>

void choicE(char x);

int clone()
{
    char x;
    fflush(stdin);

    menU();
    x = errorTrap();
    choicE(x);
}