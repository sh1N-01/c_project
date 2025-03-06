/*
============================================================================
FILE : parañaqueRenz_LE6_13.c
AUTHOR : Renz Joseph P. Para�aque
DESCRIPTION : Power Problem Solver
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 10.13.2024 Time: 12:14 A.M.
============================================================================
FUNCTION : displayMenu()
DESCRIPTION : Displays the program menu
ARGUMENTS : 
No passed Arguments
RETURNS : 
1. return choice - returns "choice" in order to detect what the user has
inputted
============================================================================
FUNCTION : isVowel
DESCRIPTION : Detects if letter is a vowel, or else it's a consonant
ARGUMENTS : 
char ch - This is the input from the user, stored as a character
RETURNS : 
1. return 0
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#include<math.h>
#include<windows.h>
//Function Prototypes
int displayMenu();
int powerSolver();
int factorialSolver();
int quadraticSolver();
//Global varibale declaration
int main()
{
    system("cls");
    //Display Menu
    int base, choice, p;
    choice = displayMenu();
    //Condition: Check if inputted value is >= 1 but <= 4
    if(choice == 1)
    {
        powerSolver();
    }

    else if(choice == 2)
    {
        factorialSolver();
    }

    else if(choice == 3)
    {
        system("cls");
        quadraticSolver();
    }

    else if(choice == 4)
    {
        fflush(stdin);
        printf("\nExiting...");
        sleep(5);
        system("exit");
    }
    //If inputted value isnt within the range
    else
    {
        fflush(stdin);
        printf("\nInvalid input. Please input numbers within the specified range (1-4).");
        sleep(3);
        return main();
    }
}
//Diplays Problem Solver menu
int displayMenu()
{
    int choice;
    //Display Choice Output
    printf("==Problem Solver Menu==\n");
    printf("1.) Power Problem Solver.\n");
    printf("2.) Factorial Problem Solver.\n");
    printf("3.) Quadratic Roots Solver.\n");
    printf("4.) Exit.\n\n");
    printf("Please select your choice (1-4): ");
    scanf("%d", &choice);

    return choice;
}
//Problem Solver 1: Power
int powerSolver()
{
    system("cls");
    fflush(stdin);

    int base, p, result;
    char repeat;
    result = 1;
    //Ask user input
    printf("Please Input a base number: ");
    scanf("%d", &base);
    printf("Please input an exponent for the base number: ");
    scanf("%d", &p);
    //Loop: multiply base to itself 
    for(int i = 1; i <= p; i++)
    {
        result *= base;
    }
    //Output
    printf("\n\nBase %d with exponent %d: %d ", base, p, result);
    //Loop back to main or to power solver
    sleep(5);
    fflush(stdin);
    printf("\n\nAgain? (Y/N): ");
    scanf("%c", &repeat);
    if((repeat == 'Y') || (repeat == 'y'))
    {
        return powerSolver();
    }

    else
    {
        printf("\nGoing back to menu...");
        sleep(3);
        return main();
    }

}
//Problem solver 2: Factorial
int factorialSolver()
{
    system("cls");
    fflush(stdin);

    int num, result;
    char repeat;
    result = 1;
    //Ask user input
    printf("Enter a number: ");
    scanf("%d", &num);
    //Loop: Mutiply number to its lesser value until 1
    for (int counter = num; counter > 0; counter--)
    {
        result *= counter;
    }
    //Output
    printf("\n\nFactorial of %d is %d ", num, result);
    //Loop back to main or to power solver
    sleep(5);
    fflush(stdin);
    printf("\n\nAgain? (Y/N): ");
    scanf("%c", &repeat);
    if((repeat == 'Y') || (repeat == 'y'))
    {
        return factorialSolver();
    }

    else
    {
        printf("\nGoing back to menu...");
        sleep(3);
        return main();
    }
}
//Problem Solver 3: Qudratic Formula
int quadraticSolver()
{
    system ("CLS");
    fflush(stdin);
    
    float a, b, c, discriminant, x;
    int quad1, quad2;
    char repeat;
    //Ask user input
    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);
    //Computation
    discriminant = (b * b) - (4 *(a * c));
    //Conditional output: If a & b = 0
    if (a == 0 && b == 0)
    {
        putchar('\n');
        printf("There is no solution.\n");
        //Loop back to main or to quadratic formula
        sleep(5);
        fflush(stdin);
        printf("\n\nAgain? (Y/N): ");
        scanf("%c", &repeat);
        if((repeat == 'Y') || (repeat == 'y'))
        {
            return quadraticSolver();
        }

        else
        {
            printf("\nGoing back to menu...");
            sleep(3);
            return main();
        }
    }
    //Conditional output: If a = 0 && b is not 0
    else if (a == 0 && b != 0)
    {
        x = -c / b;
        putchar('\n');
        printf("Root of this equation is %.2f\n", x);
         //Loop back to main or to quadratic formula
        sleep(5);
        fflush(stdin);
        printf("\n\nAgain? (Y/N): ");
        scanf("%c", &repeat);
        if((repeat == 'Y') || (repeat == 'y'))
        {
            return quadraticSolver();
        }

        else
        {
            printf("\nGoing back to menu...");
            sleep(3);
            return main();
        }
    }
    //Conditional output: If discriminant reaches negative 
    else if (discriminant < 0)
    {
        putchar('\n');
        printf("There are no real roots.\n");
         //Loop back to main or to quadratic formula
        sleep(5);
        fflush(stdin);
        printf("\n\nAgain? (Y/N): ");
        scanf("%c", &repeat);

        if((repeat == 'Y') || (repeat == 'y'))
        {
            return quadraticSolver();
        }

        else
        {
            printf("\nGoing back to menu...");
            sleep(3);
            return main();
        }
    }
    //Conditional output: If a and b isnt 0, and discriminant isnt negative
    else
    {
        quad1 = (-b + sqrt(discriminant))/2*a;
        quad2 = (-b - sqrt(discriminant))/2*a;
        putchar('\n');
        printf("The roots are %d and %d.", quad1, quad2);
         //Loop back to main or to quadratic formula
        sleep(5);
        fflush(stdin);
        printf("\n\nAgain? (Y/N): ");
        scanf("%c", &repeat);

        if((repeat == 'Y') || (repeat == 'y'))
        {
            return quadraticSolver();
        }

        else
        {
            printf("\nGoing back to menu...");
            sleep(3);
            return main();
        }
    }
}