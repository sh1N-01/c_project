/*
============================================================================
FILE : parañaqueRenz_LE5_12.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Passcode Lock
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 09.25.2024 Time: 10:15 PM
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>

int main()
{
    int pin, pass;

    printf("Please input your new pin (4 digits only): ");
    scanf("%d", &pin);

    system ("CLS");

    for (int tries = 3; tries > 0; tries)
    {
        printf("Please input 4-digit pin: ");
        scanf("%d", &pass);

        if (pass == pin)
        {
            printf("\nAccess Granted. ");
            getch();
            exit(0);
        }

        else
        {
            tries = tries - 1;
            system("CLS");

            if (tries == 1)
            {
                system("CLS");

                printf("Wrong pin. %d more try\n", tries);
            }

            else
            {
                printf("Wrong pin. %d more tries\n", tries);
            }
            
        }

    }

    system("CLS");

    printf("Access Denied.");

    getch();
    exit(0);
}