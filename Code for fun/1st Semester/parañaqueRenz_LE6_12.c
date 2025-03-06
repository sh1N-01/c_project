/*
============================================================================
FILE : parañaqueRenz_LE6_12.c
AUTHOR : Renz Joseph P. Para�aque
DESCRIPTION : Vowel and Consonant
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 10.11.2024 Time: 11:16 P.M.
============================================================================
FUNCTION : isLetter
DESCRIPTION : Detects if input is a letter
ARGUMENTS : 
char ch - This is the input from the user, stored as a character
RETURNS : 
1. return 0
2. return char ch - returns ch as a character and pass to another function
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
bool isLetter(char ch);
bool isVowel(char ch);

int main()
{
    system("CLS");
    SetConsoleTitle("Vowel & Consonant");

    char ch;
    //Ask User Input
    printf("Enter a Letter: ");
    scanf("%c", &ch);
    //Condition to prevent double output error, Output
    if(isLetter(ch))
    {
        isVowel(ch);
    }
    //Loop back
    putchar('\n');
    system("Pause");
    fflush(stdin);
    return main();
}
//Function isLetter, to detect if input is within the alphabet
bool isLetter(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return ch;
    }

    else
    {
        printf("\nThat is not part of the alphabet.");
        return 0;
    }
}
//Function isVowel, to detect if input is vowel or consonant
bool isVowel(char ch)
{
    int lowerCase, upperCase;
    lowerCase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upperCase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    //Condition - If vowel or consonant
    if(lowerCase || upperCase)
    {
        printf("\n%c is a vowel.", ch);
    }

    else
    {
        printf("\n%c is a consonant.", ch);
    }

    return 0;
}
