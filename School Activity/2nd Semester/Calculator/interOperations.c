#include<stdio.h>
#include<stdlib.h>

#include "ns-lib/cus-lib/add.c"
#include "ns-lib/cus-lib/add.h"
#include "ns-lib/cus-lib/sub.c"
#include "ns-lib/cus-lib/sub.h"
#include "ns-lib/cus-lib/mul.c"
#include "ns-lib/cus-lib/mul.h"
#include "ns-lib/cus-lib/div.c"
#include "ns-lib/cus-lib/div.h"
#include "errortrap.c"
#include "errortrap.h"

int adD()
{
    int x, y;
    char c;

    printf("1st Value: ");
    x = errorTrap1();
    printf("2nd Value: ");
    y = errorTrap1();

    printf("\nSum of %d and %d is %d", x, y, add(x,y));
    fflush(stdin);
    printf(" (Again? (Y/N)) ");

    while(1)
    {
        if(scanf("%c", &c))
        {
            if(c == 'Y' || c == 'y')
            {
                system("CLS");
                adD();
            }

            else if(c == 'N' || c == 'n')
            {
                system("CLS");
                exit(main());
            }

            else
            {
                fflush(stdin);
                printf("Invalid Input! Try again. ");
            }
        }

        else
        {
            fflush(stdin);
            printf("Invalid Input! Try again. ");
        }
    }
}

int suB()
{
    int x, y;
    char c;

    printf("1st Value: ");
    x = errorTrap1();
    printf("2nd Value: ");
    y = errorTrap1();

    printf("\nDifference of %d and %d is %d", x, y, sub(x,y));
    printf(" (Again? (Y/N)) ");

    while(1)
    {
        if(scanf("%c", &c))
        {
            if(c == 'Y' || c == 'y')
            {
                system("CLS");
                suB();
            }

            else if(c == 'N' || c == 'n')
            {
                system("CLS");
                exit(main());
            }
        }

        else
        {
            fflush(stdin);
            printf("Invalid Input! Try again. ");
        }
    }
}

int mulT()
{
    int x, y;
    char c;

    printf("1st Value: ");
    x = errorTrap1();
    printf("2nd Value: ");
    y = errorTrap1();

    printf("\nProduct of %d and %d is %d", x, y, mul(x,y));
    printf(" (Again? (Y/N)) ");

    while(1)
    {
        if(scanf("%c", &c))
        {
            if(c == 'Y' || c == 'y')
            {
                system("CLS");
                mulT();

            }

            else if(c == 'N' || c == 'n')
            {
                system("CLS");
                exit(main());
            }
        }

        else
        {
            fflush(stdin);
            printf("Invalid Input! Try again. ");
        }
    }
}

int diV()
{
    float x, y;
    char c;

    printf("1st Value: ");
    x = errorTrap1();
    printf("2nd Value: ");
    y = errorTrap1();

    printf("\nQuotient of %.2f and %.2f is %.2f", x, y, dIv(x,y));
    printf(" (Again? (Y/N)) ");

    while(1)
    {
        if(scanf("%c", &c))
        {
            if(c == 'Y' || c == 'y')
            {
                system("CLS");
                diV();

            }

            else if(c == 'N' || c == 'n')
            {
                system("CLS");
                exit(main());
            }
        }

        else
        {
            fflush(stdin);
            printf("Invalid Input! Try again. ");
        }
    }
}
