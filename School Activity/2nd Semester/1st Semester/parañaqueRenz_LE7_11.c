/*
============================================================================
FILE : parañaqueRenz_LE7_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Largest and Smallest. Design the logic for a program that allows 
a user to enter 10 numbers, then displays all of the numbers, the largest number, 
and the smallest.
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 11.05.2024 Time: 10:28 P.M.
============================================================================
FUNCTION : askLargeSmall()
DESCRIPTION : Function for asking user input
ARGUMENTS : 
float num[10] = Varibale with size 10. Needed for storing user input values.
RETURNS : 
1. return void
============================================================================
FUNCTION : arrArrange()
DESCRIPTION : Function for array value swapping
ARGUMENTS : 
float num[10] = Varibale with size 10. Needed for storing user input values.
RETURNS : 
1. return void
===========================================================================
FUNCTION : printNum()
DESCRIPTION : Function for printing inputted numbers in descending order
ARGUMENTS : 
float num[10] = Varibale with size 10. Needed for storing user input values.
RETURNS : 
1. return void
===========================================================================
FUNCTION : errorTrap()
DESCRIPTION : Captures invalid inputs
ARGUMENTS : NONE
RETURNS : 
1. return void
===========================================================================
*/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//Predefined Function
void askLargeSmall(float num[10]);
void arrArrange(float num[10]);
void printNum(float num[10]);
void errorTrap();

int main(void)
{
    fflush(stdin);
    system("cls");
    //Set num to float
    float num[10];
    //Call functions
    askLargeSmall(num);
    arrArrange(num);
    printNum(num);

}
//Function for asking user input
void askLargeSmall(float num[10])
{
    for(int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        //Checks if inputted value is valid
        while (true)
        {
            if(scanf("%f", &num[i]) == 1)
            {
                break;
            }
            
            else 
            {
                errorTrap();
            }
        }
    }
}
//Function for array value swapping
void arrArrange(float num[10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(num[i] > num[j])
            {
                float temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}
//Function for printing inputted numbers in descending order
void printNum(float num[10])
{
    printf("\nArranging in descending order: ");

    for(int i = 0; i < 10; i++)
    {
        sleep(1);
        printf("%.2f ", num[i]);
    }

}
//Captures invalid inputs
void errorTrap()
{
    printf("\nInvalid input!");
    sleep(2);
    while (getchar() != '\n'); //Clears the invalid input
    printf("\n\nPlease enter a valid number: ");
}