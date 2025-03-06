/*
============================================================================
FILE : parañaqueRenz_LE7_13.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Longest String. Ask for 5 strings and display the longest string.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 11.06.2024 Time: 08:11 P.M.
============================================================================
FUNCTION : askInput()
DESCRIPTION : Function for asking user input
ARGUMENTS : 
char word[5][90] = Varibale with size 450. Needed for storing user input values.
RETURNS : 
1. return void
============================================================================
FUNCTION : countString()
DESCRIPTION : Function for array value swapping
ARGUMENTS : 
char word[5][90] = Variable with size 450. Needed for storing user input values.
int len[5] = Variable with size 5. Used for storing strlen int datas,
RETURNS : 
1. return void
===========================================================================
FUNCTION : printLargest()
DESCRIPTION : Function for printing inputted numbers in descending order
ARGUMENTS : 
char word[5][90] = Varibale with size 450. Needed for storing user input values.
int len[5] = Variable with size 5. Used for storing strlen int datas,
RETURNS : 
1. return void
===========================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//Predefined Function
void askInput(char word[5][90]);
void countString(char word[5][90], int len[5]);
void printLargest(char word[5][90], int len[5]);

int main()
{
    system("cls");
    //Initialize Variables
    int len[5];
    char word[5][90];
    //Function Calling
    askInput(word);
    countString(word, len);
    printLargest(word, len);
}
//Function for asking user input
void askInput(char word[5][90])
{
    for(int i = 0; i < 5; i++)
    {
        printf("Enter a string: ");
        gets(word[i]);
    }
}
//Function for getting inputted string length
void countString(char word[5][90], int len[5])
{
    for(int i = 0; i < 5; i++)
    {
        len[i] = strlen(word[i]);
    }
}
//Function for printfng the largest string typed.
void printLargest(char word[5][90], int len[5])
{
    char largest;

    for(int i = 0; i < 5; i++)
    {
        if(len[i] > len[largest])
        {
            largest = i;
        }

        else
        {
            largest = largest;
        }
    }
    //Print output
    printf("\nLargest string: %s", word[largest]);
    sleep(3);
}
