/*
============================================================================
FILE : para164aqueRenz_LE4_13.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION :  Determine a student�s final grade and indicate whether it is passing or failing.
The final grade is calculated as the average of four marks (between 0 and 100). Passing grade of 50.
COPYRIGHT : Renz Joseph P. Para�aque, StackOverflow
REVISION HISTORY
Date: 09.12.2024 Time: 04:11 P.M.
============================================================================
*/
#include<math.h> //This header is used for mathematical functions like sin(), cos(), and sqrt().//
#include<stdio.h> //This header file is crucial for using standard input and output functions like printf() and scanf()//
#include<stdlib.h> //This file includes functions for memory allocation, process control, conversions, and other utility functions.//
#include<string.h> //It provides functions for manipulating C strings, such as strlen(), strcpy(), and strcat().//
#include<windows.h> //Operating-system specific header.//
#define QUARTER 4
int main()
{
    //Sets console title//
    SetConsoleTitle("Student's FInal Grade");
>>>>>>> 9d50bf5c2979207e02d388fed4a379ccdfaf62de

    //Get usre input//
    float first, second, third, fourth, average;

    printf("Input 1st Quarter Grade: ");
    scanf("%f", &first);
    printf("Input 2nd Quarter Grade: ");
    scanf("%f", &second);
    printf("Input 3rd Quarter Grade: ");
    scanf("%f", &third);
    printf("Input 4th Quarter Grade: ");
    scanf("%f", &fourth);

    //Computation//
    average = (first + second + third + fourth)/QUARTER;

    //OUTPUT//
    printf("FINAL AVERAGE GRADE: %.2lf\n", average);
    if (average < 50)
    {
        printf("REMARKS: FAILED");
    }
    else
    {
        printf("REMARKS: PASSED");
    }
    return 0;
}
