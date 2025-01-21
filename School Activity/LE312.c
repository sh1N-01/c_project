<<<<<<< HEAD
/*
============================================================================
FILE : LE3,12.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Add Digits. Create a program that extracts and adds the two least significant digits of an integer.
COPYRIGHT : Renz Joseph P. Parañaque, StackOverflow
REVISION HISTORY
Date: 09.05.2024 Time: 04:00 PM
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int sampleNumber, sampleN, onesDigit, tensDigit, sum;

    printf("Enter a Number: ");
    scanf("%d", &sampleNumber);

    sampleN = sampleNumber % 100;

    onesDigit = sampleN % 10;
    tensDigit = (sampleN / 10) % 10;

    sum = onesDigit + tensDigit;

    printf("Sum of %d and %d is %d", onesDigit, tensDigit, sum);

    return 0;
}
