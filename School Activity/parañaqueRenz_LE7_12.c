/*
============================================================================
FILE : parañaqueRenz_LE7_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Vowels and Consonants in String. Ask a string and determine 
how many vowels and consonants.
COPYRIGHT : Renz Joseph P. Para�aque
REVISION HISTORY
Date: 11.06.2024 Time: 12:06 A.M.
============================================================================
FUNCTION :  askInput()
DESCRIPTION : Function for asking user input
ARGUMENTS : 
char word[90] = Varibale with size 90. Needed for storing user input characters.
RETURNS : 
1. return void
============================================================================
FUNCTION : isVowel)
DESCRIPTION : Function for array value swapping
ARGUMENTS : 
char word[90] = Varibale with size 90. Needed for storing user input characters.
int *vowelCount = Variable Pointer for vowel counter
int *consonantCount = Variable Pointer for consonant counter
RETURNS : 
1. return void
===========================================================================
FUNCTION : print()
DESCRIPTION : Function for printing inputted numbers in descending order
ARGUMENTS : 
int *vowelCount = Variable Pointer for vowel counter
int *consonantCount = Variable Pointer for consonant counter
RETURNS : 
1. return void
===========================================================================
*/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Predfeined Function
void askInput(char word[90]);
void isVowel(char word[90], int *vowelCount, int *consonantCount);
void print(int vowelCount, int consonantCount);

int main()
{
    system("cls");
    //Initliaze variables
    int vowelCount = 0, consonantCount = 0;
    char word[90];
    //Call Functions
    askInput(word);
    isVowel(word, &vowelCount, &consonantCount);
    print(vowelCount, consonantCount);
    
}
//Function that asks user an input
void askInput(char word[90])
{
    printf("Enter a sentence/string: ");
    gets(word);
    //Erase newline in an inputted string 
    word[strcspn(word, "\n")] = '\0';
}
/*Function that scans the inputted string for how many vowels and consonants:
A string can consists of letters, numbers, special characters.*/
void isVowel(char word[90], int *vowelCount, int *consonantCount)
{
    //Convert inputted string to number
    int len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        char ch = word[i];
        //Set lowerCase and upperCase to correspoding vowel equivalence
        char lowerCase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        char upperCase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        //Conditional counting
        if(upperCase || lowerCase)
        {
            *vowelCount = *vowelCount + 1;
        }

        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            *consonantCount = *consonantCount + 1;
        }
    }
}
//Function the prints the output
void print(int vowelCount, int consonantCount)
{
    printf("\nNumber of Vowels in inputted word: %d", vowelCount);
    printf("\nNumber of Consonants in inputted word: %d", consonantCount);
}