/*
============================================================================
FILE : LE3.13.cpp
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Tuition Fee. Create a program that prints the tuition for 2 semesters at ABC College. 
ABC charges PHP 450 for registration, plus PHP 450 per unit and a penalty of PHP 2,260 for each 12 units or fraction of 12.
COPYRIGHT : created
REVISION HISTORY
Date: 09.06.2024 Time: 12:15 A.M.
Revisions:
- 09.09.2024 Time: 11:10 A.M.
============================================================================
*/

#include<stdlib.h>
#include<stdio.h>
#define Registration 450
#define Unit 450
#define Penalty 2260
#define Max 12

int main() {
    int firstSem, secondSem;
    float firstSemTuition, secondSemTuition, totalTuition;
    
    printf("Input FIrst Semester Number of Units: ");
    scanf("%d", &firstSem);
    printf("Input Second Semester Number of Units: ");
    scanf("%d", &secondSem);

    firstSemTuition = (firstSem * Unit) + (Registration) + ((firstSem/Max)*Penalty);
    secondSemTuition = (secondSem * Unit) + (Registration) + ((secondSem/Max)*Penalty);
    totalTuition = firstSemTuition + secondSemTuition;

    printf("First Semester Tuition Fee = %.2f\n", firstSemTuition);
    printf("Second Semester Tuition Fee = %.2f\n", secondSemTuition);
    printf("Total Tuition Fee = %.2f\n", totalTuition);

    return 0;
}