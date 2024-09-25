/*
============================================================================
FILE : parañaqueRenz_LE5_11.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Average of Even Numbers and Product of Odd Numbers.
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 09.25.2024 Time: 09:45 PM
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<conio.h>

int main()
{
    system ("CLS");

    int average, sum, product, counterEven, even, numbers;
    sum = 0;
    average = -1;
    product = 1;
    counterEven = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Please input 10 numbers: ");
        scanf("%d", &numbers);

        even = numbers % 2;

        if (even == 0)
        {
            sum = sum + numbers;
            counterEven = counterEven + 1;
        }

        else
        {
            product = product * numbers;
        }
    }

    if (counterEven > 0)
    {
        average = sum / counterEven;  
    }

    else
    {
        putchar('\n');
        printf("Please don't use odd numbers only. It'll cause an undefined average for even numbers.");
        getch();
        return main();
    }

    putchar('\n');
    printf("Average of Even numbers inputted: %d\n", average);
    printf("Product of Odd numbers inputted: %d", product);
    getch();
    return 0;
}
