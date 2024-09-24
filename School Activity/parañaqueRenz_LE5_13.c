/*
============================================================================
FILE : parañaqueRenz_LE5_13.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Problem Solver Menu. Create a program that lets the user choose an operation (power problem solver, 
factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu. 
The program will always go back to the menu and lets the user choose again an operation until the user would like 
to quit using the app.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 09.26.2024 Time: 12:02 AM
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>

int main()
{
    system ("CLS");

    int choice;
    printf("==Problem Solver Menu==\n");
    printf("1.) Power Problem Solver.\n");
    printf("2.) Factorial Problem Solver.\n");
    printf("3.) Quadratic Roots Solver.\n");
    printf("4.) Exit.\n\n");
    printf("Please select your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("CLS");

        int base, exponent, result;

        printf("Please Input a base number: ");
        scanf("%d", &base);
        printf("Please input an exponent for the base number: ");
        scanf("%d", &exponent);

        result = pow(base,exponent);

        printf("Base %d with exponent %d: %d ", base, exponent, result);
        getch();
        return main();
    }

    else if (choice == 2)
    {
        system ("CLS");

        int factorial, factorial1, result;
        result = 1;
        printf("Enter a number: ");
        scanf("%d", &factorial);
        factorial1 = factorial;

        for (int counter = factorial; counter > 0; counter--)
        {
            result *= counter;
        }

        printf("Factorial of %d is %d ", factorial1, result);
        getch();
        return main();
    }

    else if (choice == 3)
    {
        system ("CLS");

         float a, b, c, discriminant, x;
         int quad1, quad2;

        printf("Enter value for a: ");
        scanf("%f", &a);
        printf("Enter value for b: ");
        scanf("%f", &b);
        printf("Enter value for c: ");
        scanf("%f", &c);

        discriminant = (b * b) - (4 *(a * c));

        if (a == 0 && b == 0)
        {
            putchar('\n');
            printf("There is no solution.\n");
            getch();
            return main();
        }

        else if (a == 0 && b != 0)
        {
            x = -c / b;
            putchar('\n');
            printf("Root of this equation is %.2f\n", x);
            getch();
            return main();
        }

        else if (discriminant < 0)
        {
            putchar('\n');
            printf("There are no real roots.\n");
            getch();
            return main();
        }

        else
        {
            quad1 = (-b + sqrt(discriminant))/2*a;
            quad2 = (-b - sqrt(discriminant))/2*a;
            putchar('\n');
            printf("The roots are %d and %d.", quad1, quad2);
            getch();
            return main();
        }
    }

    else if (choice == 4)
    {
        printf("\n4Exiting... ");
        getch();
        
        system("Exit");
    }

    else
    {
        printf("\nInvalid Number. Please input numbers within the specified range (1-4).");
        getch();
        return main();
    }

    return 0;
}