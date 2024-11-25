/*
============================================================================
FILE : parañaqueRenz_LE8_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Days of the Week. Write a function that sets up an array called 
days, which contains pointers to the names of the days of the week and return 
the name of the day from the given day. The function accepts the given day.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 11.26.2024 Time: 09:28 P.M.
============================================================================
FUNCTION : errorTrap()
DESCRIPTION : Function to filter invalid inputs.
ARGUMENTS : 
char word[5][90] = Varibale with size 450. Needed for storing user input values.
RETURNS : 
- return void
============================================================================
FUNCTION : weekDay()
DESCRIPTION : Function responsible for extracting the specific day of the 
week inside a variable array.
ARGUMENTS : 
 - int num: Variable holding the user interger input
 - char *pDays: pointer variable pointing to variable pDays[20]
RETURNS : 
- return void
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Function Declaration
int errorTrap();
void weekDay(int num, char *pDays);

int main ()
{
    system("CLS");
    //Variable Initialization
    int num;
    char pDays[10];
    //Ask for user input
    printf("Enter a day: ");
    
    num = errorTrap();
    weekDay(num, pDays);
    //Output
    printf("\nDay of the Week: %s", pDays);
}
//Function responsible for filtering invalid inputs
int errorTrap()
{
    int num;

    if(scanf("%d", &num) == 1)
    {
        return num;
    }

    else
    {
        fflush(stdin);
        printf("Invalid Input! Try again: ");
        return errorTrap();
    }
}
//Function responsible for extracting the specific day of the week inside a variable array.
void weekDay(int num, char *pDays)
{
    //Pointer Variable array holding the days of week
    char *days[] = {"Invalid!", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    //Conditional String duplication
    if(num < 1 || num > 7)
    {
        strcpy(pDays, days[0]);
    }

    else
    {
        strcpy(pDays, days[num]);
    }

}