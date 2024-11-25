/*
============================================================================
FILE : parañaqueRenz_LE8_13.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Maximum Number. Create a function that determine and returns 
the maximum number in an array of integers using pointers. The function 
accepts the starting address of the array and number of entries.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 11.26.2024 Time: 12:44 A.M.
============================================================================
FUNCTION : errorTrap()
DESCRIPTION : Function to filter invalid inputs in main()
ARGUMENTS : 
- int x: Variable holding the loopNth reiteration
RETURNS : 
- return x
============================================================================
FUNCTION : loopNth()
DESCRIPTION : Function responsible for asking user nth time for their number inputs
ARGUMENTS : 
- int *x: Pointer variable pointing to x
- int y[]: Variable y with array size
RETURNS : 
- return void
============================================================================
FUNCTION : maxiMa()
DESCRIPTION : Function responsible for asking user nth time for their number inputs
ARGUMENTS : 
- int x: Variable holding the loopNth reiteration
- int y[]: Variable y with array size
- int *max: Pointer variable pointing to variable max
RETURNS : 
- return void
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
//Function Declaration
int errorTrap();
void loopNth(int *x, int y[]);
void maxiMa(int x, int y[], int *max);

void main()
{
    system("CLS");
    //Initiliaze variable
    int max, x, y[100];
    //Ask user input
    printf("Enter number of entries: ");
    x = errorTrap();

    loopNth(&x, y);
    maxiMa(x, y, &max);
    //Output
    printf("\nHighest Number Inputted: %d", max);
}
//Function to filter invalid inputs in main()
int errorTrap()
{
    int x;

    if(scanf("%d", &x))
    {
        return x;
    }

    else
    {
        
        fflush(stdin);
        printf("Invalid Input! Try again: ");
        return errorTrap(x);
    }
}
//Function responsible for asking user nth time for their number inputs
void loopNth(int *x, int y[])
{
    putchar('\n');

    for(int i = 0; i < *x; i++)
    {
        printf("Enter a number: ");
        y[i] = errorTrap();
    }
}
//Function responsible for storing and returning the largest inputted number
void maxiMa(int x, int y[], int *max)
{
    *max = y[0];

    for(int i = 0; i < x; i++)
    {
        if(y[i] > *max)
        {
            *max = y[i];
        }
    }
}