/*
============================================================================
FILE : parañaqueRenz_ME5.c
AUTHOR : Renz Joseph P. Parañaque
DESCRIPTION : Get largest and smallest number upon input
COPYRIGHT : Renz Joseph P. Parañaque
REVISION HISTORY
Date: 10.15.2024 Time: 03:22 PM
============================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>

int main()
{
    float num, num1, large = 1, small = 1;
    //Loop user input
    while (num != -99)
    {
        //Ask user input
        printf("Enter a number: ");
        scanf("%f", &num);
        //Conditional variable storing to detect if it's the largest number or smallest
        if(num > large)
        {
            large = num;
            num1 = num;
        }

        else
        {
            if(num != -99 && num < small)
            {
                small = num;
                num1 = num;
            }
        }

    }
    //Output
    printf("\nLargest number: %.1f", large);
    printf("\nSmallest number: %.1f\n\n", small);

    system("pause");
    return 0;
}


