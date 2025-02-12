#include "../lib/main.h"

int errorTrap()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            if(x >= 1 && x <= 5)
            {
                return x;
                break;
            }

            else
            {
                printf("\nChoice not within desired range! Try again. ");
            }
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}

int errorTrap1()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            return x;
            break;
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}

int errorTrap2(int count)
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            if(x >= 1 && x <= count)
            {
                return x;
                break;
            }

            else
            {
                printf("\nChoice not within desired range! Try again. ");
            }
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}

int loadTrap(int count)
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            if(x >= 0 && x <= count)
            {
                return x;
                break;
            }

            else
            {
                printf("\nCan't use more or less than what you have! Try again. ");
            }
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}

int reloadTrap(int count)
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            if(count == 0 && x >= 0 && x <= 5)
            {
                return x;
                break;
            }
            
            else if(x >= 0 && x <= 5 - count)
            {
                return x;
                break;
            }

            else
            {
                printf("\nExceeded maximum mag size! Try again. ");
            }
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}

float sizeCatch()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
        {
            if(x == 1)
            {
                return 1.0;
                break;
            }

            else if(x == 2)
            {
                return 1.5;
                break;
            }

            else if(x == 3)
            {
                return 3.0;
                break;
            }

            else
            {
                printf("\nChoice not within desired range! Try again. ");
            }
        }

        else
        {
            printf("\nInvalid Choice! Try again. ");
        }
        while(getchar() != '\n');
    }
}