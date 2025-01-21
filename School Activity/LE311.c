<<<<<<< HEAD
/*
============================================================================
FILE : LE3,12.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Weekly Pay. Create a program that asks for user's yearly pay and displays his weekly pay.
COPYRIGHT : Renz Joseph P. Parañaque, StackOverflow
REVISION HISTORY
Date: 09.05.2024 Time: 04:00 PM
============================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#define WY 52.1429

int main() {
    int userYearPay;
    float weeklySalary;
    printf("Input Yearly Pay:");
    scanf("%d", &userYearPay);
    weeklySalary = userYearPay / WY;
    printf("Your weekly pay is %.2f\n", weeklySalary);

    return 0;
}
