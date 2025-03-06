/*
============================================================================
FILE : parañaqueRenz_LE8_12.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Search Element. Write a function to search an element in array 
using pointers and return the index location. The function accepts the starting 
address of the array, number of entries and number to search.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 11.26.2024 Time: 01:14 A.M.
============================================================================
FUNCTION : errorTrap()
DESCRIPTION : Function to filter invalid inputs
ARGUMENTS : 
- NONE
RETURNS : 
- return sizeEntry
============================================================================
FUNCTION : loopNth()
DESCRIPTION : Function responsible for asking user input in a loop
ARGUMENTS : 
 - int *sizeEntry: Pointer variable pointing to sizeEntry 
 - int pNth[]: Variable array that holds all user integer input for search element
RETURNS : 
- return void
===========================================================================
FUNCTION : searchIndex()
DESCRIPTION : //Function responsible for determination of inputted number 
whether it is inisde the arrray or no.
ARGUMENTS : 
 - int *sizeEntry: Pointer variable pointing to sizeEntry 
 - int pNth[]: Variable array that holds all user integer input for search element
RETURNS : 
 - return i
 - return -1
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>
//Function Declaration
int errorTrap();
void loopNth(int *sizeEntry, int pNth[]);
int searchIndex (int pNth[], int *sizeEntry);

void main()
{
    system("CLS");

    int sizeEntry, x;
    int pNth[100];

    printf("Enter number of entries to be made: ");

    sizeEntry = errorTrap();
    loopNth(&sizeEntry, pNth);
    x = searchIndex(pNth, &sizeEntry);

    if(x != -1)
    {
        printf("Found in Index: %d", x);
    }

    else
    {
        printf("Data not found.");
    }
}
//Function responsible for filtering invalid inputs
int errorTrap()
{
    int sizeEntry;

    if(scanf("%d", &sizeEntry) == 1)
    {
        return sizeEntry;
    }

    else
    {
        fflush(stdin);
        printf("Invalid Input! Try again: ");
        return errorTrap();
    }
}
//Function responsible for asking user input in a loop
void loopNth(int *sizeEntry, int pNth[])
{
    for(int i = 0; i < *sizeEntry; i++)
    {
        printf("Enter a number: ");
        pNth[i] = errorTrap();
    }
}
//Function responsible for determination of inputted number whether it is inisde the arrray or no
int searchIndex(int pNth[], int *sizeEntry)
{
    int i = 0;
    int searchData;
    
    printf("\nSearch Data: ");
    scanf("%d", &searchData);

    
    while (i < *sizeEntry) 
    { 
        if (pNth[i] == searchData) 
        {
            return i; 
        }

        i++;
    }
    return -1;
}
