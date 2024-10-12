/*
============================================================================
FILE : para164aqueRenz_LE4_12.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Quadratic Equation. Compute the real roots of a quadratic equation .
The roots can be calculated using the following formulas: . It will prompt the user to enter the constants (a, b, c)
and display the roots based on the following rules:
    - If both a and b are zero, there is no solution
    - If a is zero, there is only one root (-c/b).
    - If the discriminate (b2-4ac) is negative, there are no real roots
    - For all other combinations, there are two roots.
COPYRIGHT : Renz Joseph P. Parañaque, StackOverflow
REVISION HISTORY
Date: 09.12.2024 Time: 03:36 PM
============================================================================
*/
#include<math.h> //This header is used for mathematical functions like sin(), cos(), and sqrt().//
#include<stdio.h> //This header file is crucial for using standard input and output functions like printf() and scanf()//
#include<stdlib.h> //This file includes functions for memory allocation, process control, conversions, and other utility functions.//
#include<string.h> //It provides functions for manipulating C strings, such as strlen(), strcpy(), and strcat().//
#include<windows.h> //Operating-system specific header.//

int main()
{
    //Sets console title//
    SetConsoleTitle("Quadratic Equation");

    //Get user input//
    float a, b, c, discriminant, x;
    int quad1, quad2;

    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);

    //Computation for discriminant//
    discriminant = (b * b) - (4 *(a * c));

    //Comparison//
    if (a == 0 && b == 0)
    {
        printf("There is no solution.\n");
    }
    else if (a == 0 && b != 0)
    {
        x = -c / b;
        printf("Root of this equation is %.2f\n", x);
    }
    else if (discriminant < 0)
    {
        printf("There are no real roots.\n");
    }
    else
    {
        quad1 = (-b + sqrt(discriminant))/2*a;
        quad2 = (-b - sqrt(discriminant))/2*a;
        printf("The roots are %d and %d.", quad1, quad2);
    }
    return 0;
}
