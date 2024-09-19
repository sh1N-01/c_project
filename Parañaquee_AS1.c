/*
============================================================================
FILE : Parañaque_AS1.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Selection Structure: Create a program that lets a user select
the method of calculation, either calculate the area and volume of a cylinder,
calculate account balance, and calculate final velocity and time travelled.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 09.19.2024 By: Renz Joseph P. Parañaque Description: 03.49 P.M.
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#define PI 3.14159
#define GRAVITY 32.1

int main()
{
    //Clear screen
    system ("CLS");
    // Set terminal title
    SetConsoleTitle("Selection Assignment #1");
    // Display choices
    int choice;
    printf("Choose what program you wish to solve:\n");
    printf("1. Calculate the area & volume of a cylinder.\n");
    printf("2. Calculate account balance.\n");
    printf("3. calculate the final velocity and time of travel of a baseball.\n\n");
    // Read user's choice
    printf("Select your choice (1-3): ");
    scanf("%d", &choice);
    // Choice 1
    if (choice == 1)
        {
             // Clears screen
            system("CLS");
            // Set terminal title
            SetConsoleTitle("Area & Volume of a Cylinder");
            // Variables
            float height, radius, area, volume;
            // Read user input
            printf("Please input height: ");
            scanf("%f", &height);
            printf("Please input radius: ");
            scanf("%f", &radius);
            // Read if variables inputted are numbers
            if (height < 1 || height > 1000 || radius < 1 || radius  > 1000 )
            {
                putchar('\n');
                printf("Invalid input. Height and radius must be between 1 and 1000.\n");
                getch();
            }
            else
            {
                // Calculate area
                area = (2*PI*radius*height)+(2*PI*(radius*radius));
                // Calculate volume
                volume = (PI*(radius*radius)*height);
                // Display results
                putchar('\n');
                printf("The area of the cylinder is: %.2f\n", area);
                printf("The volume of the cylinder is: %.2f\n", volume);
                getch();
            }
    
              return 0;
        }
    // Choice 2
    else if (choice == 2)
        {
            // Clears screen
            system("CLS");
            // Set terminal title
            SetConsoleTitle("Account Balance");
            // Variables
            double amount, interestRate, interestRate1, accountBalance, power;
            int period;
            // Read user input
            printf("Please input amount: ");
            scanf("%lf", &amount);
            printf("Please input period (Years): ");
            scanf("%d", &period);
            printf("Please input interest rate: ");
            scanf ("%lf", &interestRate);
            // Read if variables inputted are numbers
            if (amount < 0 )
            {
                putchar('\n');
                printf("Invalid input. Amount must be non-negative.\n");
                getch();
            }
            else
            {
                interestRate1 = 1+(interestRate / 100);
                power = pow(interestRate1, period);
                accountBalance = amount * power;
                putchar('\n');
                printf ("Account Balance is: %.2f\n", accountBalance);
                getch();
            }

            return 0;
        }
    // Choice 3
    else if (choice == 3)
        {
             // Clears screen
            system("CLS");
            // Set terminal title
            SetConsoleTitle("Baseball Velocity and Time");
            // Variables
            float initialVelocity, height, finalVelocity, time;
            // Read user input
            printf("Please input initial velocity: ");
            scanf("%f", &initialVelocity);
            printf("Please input height: ");
            scanf("%f", &height);
            //Computation
            finalVelocity = sqrt((initialVelocity*initialVelocity)+(2 * GRAVITY * height));
            time = (abs(finalVelocity-initialVelocity))/GRAVITY;
            // Display results
            putchar('\n');
            printf("Final velocity is: %.2f\n", finalVelocity);
            printf("Travel time is: %.4f seconds\n", time);
            getch();

            return 0;
        }
    //If not in the choices
    else if (choice <1 || choice > 3)
    {
        printf("Invalid choice. Please try again.");
        getch();
    }

    return 0;
}
