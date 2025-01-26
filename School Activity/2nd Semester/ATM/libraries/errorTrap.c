#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int errorTrap()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x))
        {
            if (x >= 1 && x <= 5)
            {
                return x;
            }

            else
            {
                printf("\033[0;31mNumber not in the range! Try again. \033[0m");
            }
        }

        else
        {
            printf("\033[0;31mInvalid Input! Try again. \033[0m");
            while(getchar() != '\n');
        }
    }
}

int errorTrap1()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x))
        {
            return x;
        }

        else
        {
            printf("\033[0;31mInvalid Input! Try again. \033[0m");
            while(getchar() != '\n');
        }
    }
}

int sixDigitTrap() 
{
    int y;
    char x2[100];

    while (1) 
    {
        if (scanf("%99s", x2) == 1) 
        { 
            y = strlen(x2);

            if (y == 6 && strspn(x2, "0123456789") == y) 
            {
                return atoi(x2); 
            } 
            
            else 
            {
                printf("\033[0;31mPIN recedes or exceeds desired length! Try again. \033[0m");
            }
        } 
        
        else 
        {
            printf("\033[0;31mInvalid Input! Try again. \033[0m");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');
    }
}