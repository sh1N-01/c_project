/*
============================================================================
FILE : parañaqueRenz_LE6_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Add Last two digits
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 10.08.2024 Time: 03:42 P.M.
Date: 10.11.2024 TIme: 11:28 P.M.
============================================================================
FUNCTION : extractFirstLSD
DESCRIPTION : Extracts the last number of the inputted number
ARGUMENTS : 
(int nth) - nth is a user input
RETURNS :
1. return int first - Returns variablefirst in order for the next function to 
know the value of the variable first
============================================================================
FUNCTION : extractSecondLSD
DESCRIPTION : Extracts the 2nd last number of the inputted number
ARGUMENTS : 
(int nth) - nth is a user input
RETURNS :
1. return int second - Returns variable second in order for the next function 
to know the value of the variable second
============================================================================
FUNCTION :  sumDigits
DESCRIPTION : Adds the 2 extracted variables to get output
ARGUMENTS : 
(int first) - Variable first will be used to get the variable sum
(int second) - Variable second will be used to get the variable sum
RETURNS :
1. return 0
============================================================================
*/
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include<windows.h>
//Function Prototype
int extractFirstLSD(int nth);
int extractSecondLSD(int nth);
int sumDigits(int first, int second);
//Main Function
void main()
{
    SetConsoleTitle("Add Digits");

    system("CLS");
    //Initialize Variables and ask user input
    int nth, first, second, sum;
    printf("Enter a value: ");
    scanf("%d", &nth);
    //Function Calculation and display output
    first = extractFirstLSD(nth);
    second = extractSecondLSD(nth);
    sum = sumDigits(first, second);

    system("Pause");
}
//Function to get first digit
int extractFirstLSD(int nth)
{
    nth = nth % 100;
    int first = nth % 10;
    return first;
}
//Function to get second digit
int extractSecondLSD(int nth)
{
    nth = nth % 100;
    int second = (nth / 10)%10;
    return second;
}
//Add first and second digit
int sumDigits(int first, int second)
{
    int sum = first + second;
    printf("\n%d + %d = %d\n", first, second, sum);
    return 0;
}
