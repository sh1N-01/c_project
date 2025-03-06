/*
============================================================================
FILE : para164aqueRenz_LE4_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Vowel and Consonant. Determine whether the letter entered by the user is vowel or consonant.
Do not use predefine functions (isAlpha, tolower, toupper, etc.).
COPYRIGHT : Renz Joseph P. Parañaque, StackOverflow
REVISION HISTORY
Date: 09.12.2024 Time: 02:29 P.M
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h> //Operating-system specific header.//
>>>>>>> 9d50bf5c2979207e02d388fed4a379ccdfaf62de

int main()
{
    //Sets console title//
    SetConsoleTitle("Vowel & Consonant");

    char cLetter;
    int lowerVowel, upperVowel;
    printf("Enter an alphabet: ");
    scanf("%c", &cLetter);
    //Sets variables to ceratin character input//
    lowerVowel = (cLetter == 'a'|| cLetter == 'e'|| cLetter == 'i'|| cLetter == 'o'|| cLetter == 'u');
    upperVowel = (cLetter == 'A'|| cLetter == 'E'|| cLetter == 'I'|| cLetter == 'O'|| cLetter == 'U');
    //Comparison//
        if ((cLetter >= 'A' && cLetter <= 'Z') || (cLetter >= 'a' && cLetter <= 'z'))
        {
            if (lowerVowel || upperVowel)
            {
                printf("%c is a vowel.\n", cLetter);
            }
            else
            {
                printf("%c is a consonant.\n", cLetter);
            }
        }
        else
        {
            printf("That is not an alphabet.\n");
        }
    return 0;
}
